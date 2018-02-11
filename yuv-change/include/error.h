#ifndef __ERROR_ERROR_ESTIMATE_H__
#define __ERROR_ERROR_ESTIMATE_H__

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <vector>
#include <sstream>
#include <global.h>

struct Point{
    double x;
    double y;
    double z;
};

void load_data(const std::string& file, std::vector<Point>& point, int &size)
{
    std::ifstream f;
    f.open(file.c_str());
    while(!f.eof())
    {
        std::string s;
        std::getline(f,s);
	std::stringstream ss;
        ss<<s;
        Point point_;
        ss>>point_.x;
        ss>>point_.y;
        ss>>point_.z;
        point.push_back(point_);
    }
    size = point.size();
    INFO_STREAM("data size: "<<size);
}
double calculate(const Point& point1, const Point& point2)
{
    return sqrt(pow((point1.x - point2.x), 2.0)+pow((point1.y - point2.y),2.0)+pow((point1.z - point2.z),2.0));
}
#endif //__ERROR_ERROR_ESTIMATE_H__