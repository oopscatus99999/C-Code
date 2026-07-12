#include <iostream>
#include <cmath>
#include "haversine.hpp"

double DegToRad(double &degree)
{
    // convert degree to rad
    const double PI = 3.14159265358979323846;
    double radians = degree * (PI / 180.0);
    return radians;

}

double calculateDistance(double lat1, char latDir1, double lon1, char lonDir1, 
                         double lat2, char latDir2, double lon2, char lonDir2)
                         {
                                
    if (latDir1 == 'S') lat1 = -lat1;
    if (lonDir1 == 'W') lon1 = -lon1;
    
    if (latDir2 == 'S') lat2 = -lat2;
    if (lonDir2 == 'W') lon2 = -lon2;
    lat1 = DegToRad(lat1);
    lon1 = DegToRad(lon1);
    lat2 = DegToRad(lat2);
    lon2 = DegToRad(lon2);
    const double R = 3959.9;
    // convert rad to miles 
    double dlat = lat2 - lat1;
    double dlon = lon2 - lon1;

    double a = (std::sin(dlat / 2) * std::sin(dlat / 2)) + 
           (std::cos(lat1) * std::cos(lat2) * (std::sin(dlon / 2) * std::sin(dlon / 2)));
    
    double c = 2 * std::atan2(std::sqrt(a), std::sqrt(1.0 - a));
    double d = R * c;
    return d;
}
