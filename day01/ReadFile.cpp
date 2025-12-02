//
// Created by Sebastian Krämer on 02.12.25.
//

#include "ReadFile.h"

#include <fstream>
#include <vector>

std::vector<std::string> ReadFile::all(const std::string &fileName) {
    std::ifstream f;
    f.open(fileName, std::ios::in);
    if (!f.is_open()) {
        throw std::runtime_error("File does not exist");
    }
    std::vector<std::string> result;
    std::string line;
    while (std::getline(f, line)) {
        result.push_back(line);
    };

    return result;
}
