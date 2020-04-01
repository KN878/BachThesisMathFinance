//
// Created by kn on 04.01.2020.
//

#ifndef IPOPT_MLE_CSVREADER_H
#define IPOPT_MLE_CSVREADER_H

#include <string>
#include <vector>

class CSVReader {
public:
    explicit CSVReader(std::string filename);

    void readDataColumn(const std::string &columnName, std::vector<double> *values);

    void changeFile(std::string filename);

private:
    std::string m_filename;

    std::vector<std::string>& split(const std::string &in, std::vector<std::string>& values, char delimiter = ',');
};


#endif //IPOPT_MLE_CSVREADER_H
