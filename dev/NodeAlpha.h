#pragma once
#include "SensorSnapshot.h"

class NodeAlpha {
private:
    float currentEnergyLevel;
    int environmentStatus;

    // Sovereign Threshold Constants
    const float STORM_THRESHOLD = 80.0f;
    const float CALM_THRESHOLD = 60.0f;
    const float BAROMETRIC_DROP = 920.0f;
    const float WIND_STALL = 25.0f;
    const float WIND_BEAST = 45.0f;

public:
    NodeAlpha();
    void harvestEnergy(float waveForce, float barometricPressure, float windVelocity);
    SensorSnapshot transmitLiFiData();
};