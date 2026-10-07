#include "NodeAlpha.h"
#include <iostream>

// Constructor initializes default values
NodeAlpha::NodeAlpha() {
    currentEnergyLevel = 0.0f;
    environmentStatus = 0;
}

// Simulates the physical harvesting of wave kinetic and atmospheric energy
void NodeAlpha::harvestEnergy(float waveForce, float barometricPressure, float windVelocity) {

    // Integrated Threshold Logic using Sovereign Constants
    if (waveForce >= STORM_THRESHOLD || barometricPressure <= BAROMETRIC_DROP || windVelocity >= WIND_BEAST) {
        environmentStatus = 5; // Category 5: Beast Mode
    }
    else if (waveForce >= 65.0f || windVelocity >= WIND_STALL) {
        environmentStatus = 4; // Category 4: Stall Mode
    }
    else if (waveForce >= 45.0f) {
        environmentStatus = 3; // Category 3
    }
    else if (waveForce >= 25.0f) {
        environmentStatus = 2; // Category 2
    }
    else {
        environmentStatus = 1; // Category 1
    }

    // Harvesting scales with wave force
    currentEnergyLevel = currentEnergyLevel + (waveForce * 1.5f);

    std::cout << "[Node Alpha] Harvesting kinetic energy... Current Reserve: "
        << currentEnergyLevel << " units.\n";
}

// Generates the data packet to send to Node Beta
SensorSnapshot NodeAlpha::transmitLiFiData() {
    SensorSnapshot payload;

    payload.waveKineticEnergy = currentEnergyLevel;
    payload.stormCategory = environmentStatus;

    // Flag as critical if it's a Cat 4 or Cat 5 storm
    if (environmentStatus >= 4) {
        payload.isCritical = true;
        std::cout << "[Node Alpha] CRITICAL STORM DETECTED. Flagging payload.\n";
    }
    else {
        payload.isCritical = false;
    }

    std::cout << "[Node Alpha] Transmitting LiFi telemetry payload...\n";

    return payload;
}