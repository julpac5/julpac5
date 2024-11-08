#ifndef SEQUENCE_H
#define SEQUENCE_H

#include <string>

class Sequence {
private:
    std::string name;
    std::string sequence;

public:
    Sequence();
    void readFasta(const std::string& filePath);
    void print() const;
};

#endif
