#pragma once
#include <string>

class NodeTheta {
private:
    int totalArchivedRecords;

public:
    NodeTheta();
    void secureArchive(std::string alertData);
};
// Added NodeTheta for the third class.