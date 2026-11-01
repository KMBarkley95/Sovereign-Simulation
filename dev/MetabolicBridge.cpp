#include <iostream>
#include "NodeAlpha.h"
#include "NodeBeta.h"
#include "NodeTheta.h"

int main() {
    std::cout << "=================================================\n";
    std::cout << " PROJECT SOVEREIGN: METABOLIC BRIDGE SIMULATION \n";
    std::cout << "=================================================\n\n";

    // Instantiate the network nodes
    NodeAlpha tideforgeMaris;
    NodeBeta terraWeave;
    NodeTheta deepSafeVault;

    bool systemActive = true;
    int menuChoice = 0;

    while (systemActive) {
        std::cout << "\n--- OPERATOR COMMAND INTERFACE ---\n";
        std::cout << "1. Simulate Standard Ocean Swell (Nominal Conditions)\n";
        std::cout << "2. Simulate Severe Storm (Category 1-3 Surge)\n";
        std::cout << "3. Simulate Catastrophic 'Beast Mode' Hurricane & Plasma Spike\n";
        std::cout << "4. Terminate Simulation\n";
        std::cout << "Select Operation Mode (1-4): ";

        std::cin >> menuChoice;

        float waveForce = 0.0f;
        float barometricPressure = 1013.25f;
        float windVelocity = 10.0f;
        float plasmaVoltage = 0.0f;

        switch (menuChoice) {
        case 1:
            waveForce = 35.0f;
            barometricPressure = 1005.0f;
            windVelocity = 15.0f;
            std::cout << "\n[Operator] Injecting Nominal Swell parameters...\n";
            break;
        case 2:
            waveForce = 70.0f;
            barometricPressure = 980.0f;
            windVelocity = 30.0f;
            std::cout << "\n[Operator] Injecting Severe Storm parameters...\n";
            break;
        case 3:
            waveForce = 95.0f;
            barometricPressure = 910.0f;
            windVelocity = 50.0f;
            plasmaVoltage = 110.0f;
            std::cout << "\n[Operator] INJECTING CATASTROPHIC STORM / PLASMA SPIKE...\n";
            break;
        case 4:
            std::cout << "\n[Operator] Shutting down Sovereign telemetry bridge. Standing down.\n";
            systemActive = false;
            continue;
        default:
            std::cout << "\n[!] Invalid command vector. Select 1 through 4.\n";
            continue;
        }

        // Consolidated Transmission Bridge (Executes once per loop with dynamic variables)
        tideforgeMaris.harvestEnergy(waveForce, windVelocity, barometricPressure, plasmaVoltage);
        SensorSnapshot telemetry = tideforgeMaris.transmitLiFiData();

        terraWeave.receiveLiFiData(telemetry);
        std::string activeProtocol = terraWeave.triggerEvacProtocol();

        deepSafeVault.secureArchive(activeProtocol);

        std::cout << "-------------------------------------------------\n";
    }

    return 0;
}