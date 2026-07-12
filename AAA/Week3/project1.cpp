#include <iostream>
#include <string>
#include <cmath>
#include "location.hpp"
#include "haversine.hpp"

int main()
{
        // 1. Read the Starting Location
    double startLat, startLon;
    char startLatDir, startLonDir;
    std::string startName;
    readLocation(startLat, startLatDir, startLon, startLonDir, startName);

    // 2. Read the number of Location LIST to check
    int locationList;
    std::cin >> locationList;

    // 3. Trackers for the Closest Location
    double closestDist = 999999999.0; // Huge number to switch up for the closest location
    double closestLat, closestLon;
    char closestLatDir, closestLonDir; // For N, E, S, W
    std::string closestName;

    // 4. Trackers for the Farthest Location
    double farthestDist = -1.0; // Start negative so when loop it can switch
    double farthestLat, farthestLon;
    char farthestLatDir, farthestLonDir; // For N, E, S, W
    std::string farthestName;

    // 5. Loop through every location on the list
    for (int i = 0; i < locationList; i++)
    {
        double targetLat, targetLon;
        char targetLatDir, targetLonDir;
        std::string targetName;
        
        readLocation(targetLat, targetLatDir, targetLon, targetLonDir, targetName);
        // calculate distance for each of the location
        double dist = calculateDistance(startLat, startLatDir, startLon, startLonDir, 
                                        targetLat, targetLatDir, targetLon, targetLonDir);

        // Check if this is the new closest!
        if (dist < closestDist)
        {
            closestDist = dist;
            closestLat = targetLat;
            closestLatDir = targetLatDir;
            closestLon = targetLon;
            closestLonDir = targetLonDir;
            closestName = targetName;
        }

        // Check if this is the new farthest!
        if (dist > farthestDist)
        {
            farthestDist = dist;
            farthestLat = targetLat;
            farthestLatDir = targetLatDir;
            farthestLon = targetLon;
            farthestLonDir = targetLonDir;
            farthestName = targetName;
        }
    }

    // 6. Print the output 
    std::cout << "Start Location: " << startLat << "/" << startLatDir << " " 
              << startLon << "/" << startLonDir << " (" << startName << ")" << std::endl;
              
    std::cout << "Closest Location: " << closestLat << "/" << closestLatDir << " " 
              << closestLon << "/" << closestLonDir << " (" << closestName << ") (" 
              << closestDist << " miles)" << std::endl;
              
    std::cout << "Farthest Location: " << farthestLat << "/" << farthestLatDir << " " 
              << farthestLon << "/" << farthestLonDir << " (" << farthestName << ") (" 
              << farthestDist << " miles)" << std::endl;

    return 0;
    
}