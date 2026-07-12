#include "location.hpp"
#include <iostream>
#include <string>
#include <cmath>

void readLocation(double& lat, char& latDir, double& lon, char& lonDir, std::string& name)
{
    std::cout << ":";

    char slash1, slash2, latdir, londir;

    std::cin >> lat >> slash1 >> latDir >> lon >> slash2 >> lonDir;
    std::cin.ignore(); 
    std::getline(std::cin, name);


}