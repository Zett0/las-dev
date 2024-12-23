#ifndef LASREADER_H
#define LASREADER_H

#include <vector>
#include <string>
#include <liblas/liblas.hpp>

struct Point {
    double x, y, z;
    uint16_t intensity;
    uint16_t r, g, b;
};

class LasReader {
public:
    LasReader(const std::string& filename);
    std::vector<Point> getPoints() const;

private:
    std::vector<Point> points;
};

#endif // LASREADER_H
