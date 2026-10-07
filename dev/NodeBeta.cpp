#include "NodeBeta.h"
#include <iostream>

// Constructor initializes default values inside brackets
NodeBeta::NodeBeta() {
    isConnectedToAlpha = false;
    alertLevel = 0;
    evacuationRoute = "Nominal. No evacuation required.";
}

// Ingests the telemetry payload from Node Alpha
void NodeBeta::receiveLiFiData(SensorSnapshot incomingData) {
    isConnectedToAlpha = true;
    alertLevel = incomingData.stormCategory;

    std::cout << "[Node Beta] Telemetry received via LiFi.\n";
    std::cout << "[Node Beta] Wave Kinetic Energy: " << incomingData.waveKineticEnergy << "\n";
    std::cout << "[Node Beta] Storm Category: " << incomingData.stormCategory << "\n";

    if (incomingData.isCritical == true) {
        std::cout << "[Node Beta] PRIORITY ZERO ALERT: Critical storm metrics detected!\n";
    }
}

// Evaluates the current alert level and routes civilian evacuation plans
std::string NodeBeta::triggerEvacProtocol() {
    std::string activeProtocol; // Vessel variable declared at the top

    if (alertLevel >= 5) {
        activeProtocol = "CODE RED: Beast Mode Event. Initiate immediate coastal evacuation. Route to inland Sector 1.";
    }
    else if (alertLevel >= 4) {
        activeProtocol = "CODE ORANGE: Stall Mode Active. High wind threat. Clear coastal roads.";
    }
    else if (alertLevel >= 1) { // Cat 1-3 are classified as Severe Storms
        activeProtocol = "CODE YELLOW: Severe Storm. Secure perimeter. Prepare coastal assets for high surge.";
    }
    else {
        activeProtocol = "CODE GREEN: Nominal Conditions. All routes clear.";
    }

    // Save state internally
    evacuationRoute = activeProtocol;

    std::cout << "[Node Beta] Broadcasting Early Warning Protocol...\n";

    return activeProtocol; // Single return at the absolute bottom
}