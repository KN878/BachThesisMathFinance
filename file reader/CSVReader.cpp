//
// Created by kn on 04.01.2020.
//

#include <fstream>
#include <algorithm>
#include <sstream>
#include <iostream>

#include "CSVReader.h"

CSVReader::CSVReader(std::string filename): m_filename(std::move(filename)) {
    //Empty
}

void CSVReader::readDataColumn(const std::string &columnName, std::vector<double> *values) {
    std::ifstream file(m_filename);
    if (!file) {
        throw std::runtime_error("No such file \"" + m_filename + "\"");
    }

    std::string row;
    bool isFirstLine = true;
    int requiredColumnIndex = -1;
    while (getline(file, row)) {
        std::istringstream ss(row);
        std::vector<std::string> tokens;
        tokens = split(row, tokens);
        if (isFirstLine) {
            auto columnIt = std::find(tokens.begin(), tokens.end(), columnName);
            if (columnIt != tokens.end()) {
                requiredColumnIndex = std::distance(tokens.begin(), columnIt);
                isFirstLine = false;
            } else {
                throw std::runtime_error("No such column \"" + columnName + "\" in a file " + m_filename + "\"");
            }

        } else {
            values->push_back(std::stod(tokens[requiredColumnIndex]));
        }
    }
}

std::vector<std::string>& CSVReader::split(const std::string &in, std::vector<std::string>& values, char delimiter) {
    std::string token;
    std::istringstream ss(in);
    while (getline(ss, token, delimiter)) {
        values.push_back(token);
    }
    return values;
}

void CSVReader::changeFile(std::string filename) {
    m_filename = std::move(filename);
}
