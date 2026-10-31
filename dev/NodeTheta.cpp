#include "NodeTheta.h"
#include <iostream>

// Constructor initializes default tracking
NodeTheta::NodeTheta() {
    totalArchivedRecords = 0;
}

// Acts as a benign data logger for academic purposes
void NodeTheta::secureArchive(std::string alertData) {
    totalArchivedRecords++;
    std::cout << "[Node Theta] Archiving telemetry to secure terrestrial data sanctuary...\n";
    std::cout << "[Node Theta] Encrypted Record logged: " << alertData << "\n";
    std::cout << "[Node Theta] Total records secured: " << totalArchivedRecords << "\n";
}
// Added NodeTheta for the third class.