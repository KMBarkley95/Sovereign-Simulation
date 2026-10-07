#include <iostream>
#include "NodeAlpha.h"
#include "NodeBeta.h"

int main() {
    std::cout << "=================================================\n";
    std::cout << " PROJECT SOVEREIGN: METABOLIC BRIDGE SIMULATION \n";
    std::cout << "=================================================\n\n";

    // 1. Instantiate the network nodes
    NodeAlpha tideforgeMaris;
    NodeBeta terraWeave;

    // 2. Simulate a Category 2 weather event
    std::cout << "--- SCENARIO 1: ELEVATED SWELL ---\n";
    // Wave: 30.0f | Pressure: 1010.0f | Wind: 15.0f
    tideforgeMaris.harvestEnergy(30.0f, 1010.0f, 15.0f);
    SensorSnapshot telemetry1 = tideforgeMaris.transmitLiFiData();
    terraWeave.receiveLiFiData(telemetry1);
    terraWeave.triggerEvacProtocol();

    std::cout << "\n-------------------------------------------------\n\n";

    // 3. Simulate a sudden Category 5 Beast Mode event
    std::cout << "--- SCENARIO 2: CATASTROPHIC STORM SURGE ---\n";
    // Wave: 95.0f | Pressure: 915.0f (Plunge) | Wind: 50.0f (Beast Mode)
    tideforgeMaris.harvestEnergy(95.0f, 915.0f, 50.0f);
    SensorSnapshot telemetry2 = tideforgeMaris.transmitLiFiData();
    terraWeave.receiveLiFiData(telemetry2);
    terraWeave.triggerEvacProtocol();

    std::cout << "\n=================================================\n";
    std::cout << " SYSTEM TERMINATED SAFELY.\n";
    std::cout << "=================================================\n";

    return 0;
}