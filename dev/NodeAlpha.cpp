#include "NodeAlpha.h"
#include <iostream>

// Constructor initializes default values
NodeAlpha::NodeAlpha() {
    currentEnergyLevel = 0.0f;
    plasmaBufferLevel = 0.0f;
    environmentStatus = 1;
}

// Simulates the physical harvesting of multi-vector atmospheric energy
void NodeAlpha::harvestEnergy(float waveForce, float windVelocity, float barometricPressure, float plasmaVoltage) {

    // 1. Catastrophic Triggers (Beast Mode & Plasma Surge)
    if (waveForce >= STORM_THRESHOLD || barometricPressure <= BAROMETRIC_DROP || windVelocity >= WIND_BEAST || plasmaVoltage >= PLASMA_SPIKE_THRESHOLD) {
        environmentStatus = 5;
        std::cout << "[Node Alpha] BEAST MODE ENGAGED. Hurricane & Plasma Ion-Mass Harvesting active.\n";
    }
    // 2. Hysteresis Buffer: Only relax back to nominal if explicitly safe
    else if (environmentStatus == 5 && waveForce < CALM_THRESHOLD && windVelocity < WIND_STALL) {
        environmentStatus = 1;
        std::cout << "[Node Alpha] Atmospheric pressure stabilized. Disengaging Beast Mode.\n";
    }
    // 3. Structural Lockdown: High wind threshold reached
    else if (environmentStatus != 5 && windVelocity >= WIND_STALL) {
        environmentStatus = 4;
        std::cout << "[Node Alpha] High wind detected (25+ m/s). Engaging Stall Mode.\n";
    }

    // Energy & Plasma Accumulation calculations
    if (environmentStatus == 5) {
        currentEnergyLevel += (waveForce * 2.0f);
        plasmaBufferLevel += (plasmaVoltage * 1.8f);
        std::cout << "[Node Alpha] Ion-Mass Plasma Buffer Charged: " << plasmaBufferLevel << " units.\n";
    }
    else {
        currentEnergyLevel += (waveForce * 1.5f);
    }

    std::cout << "[Node Alpha] Harvesting kinetic energy... Current Reserve: " << currentEnergyLevel << " units.\n";
}

// Generates the data packet to send to Node Beta
SensorSnapshot NodeAlpha::transmitLiFiData() {
    SensorSnapshot payload;

    payload.waveKineticEnergy = currentEnergyLevel;
    payload.stormCategory = environmentStatus;

    // Flag as critical if it's a Cat 4/5 storm OR if plasma buffer is overflowing
    if (environmentStatus >= 4 || plasmaBufferLevel > 150.0f) {
        payload.isCritical = true;
        std::cout << "[Node Alpha] CRITICAL STORM DETECTED. Flagging payload.\n";
    }
    else {
        payload.isCritical = false;
    }

    std::cout << "[Node Alpha] Transmitting LiFi telemetry payload...\n";

    return payload;
}