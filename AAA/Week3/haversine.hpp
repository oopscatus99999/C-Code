#ifndef HAVERSINE_HPP
#define HAVERSINE_HPP
double DegToRad(double &degree);

double calculateDistance(double lat1, char latDir1, double lon1, char lonDir1, 
                         double lat2, char latDir2, double lon2, char lonDir2);
#endif