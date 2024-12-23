#include "LasReader.h"

LasReader::LasReader(const std::string& filename) {
    std::ifstream ifs;
    ifs.open(filename, std::ios::in | std::ios::binary);

    liblas::ReaderFactory f;
    liblas::Reader reader = f.CreateWithStream(ifs);

    liblas::Header const& header = reader.GetHeader();
    for (std::size_t i = 0; i < header.GetPointRecordsCount(); ++i) {
        liblas::Point const& p = reader.GetPoint();
        points.push_back({p.GetX(), p.GetY(), p.GetZ(), p.GetIntensity(), p.GetColor().GetRed(), p.GetColor().GetGreen(), p.GetColor().GetBlue()});
        reader.ReadNextPoint();
    }
}

std::vector<Point> LasReader::getPoints() const {
    return points;
}
