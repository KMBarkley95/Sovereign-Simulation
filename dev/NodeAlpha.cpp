#include "NodeAlpha.h"
#include <iostream>

// Constructor initializes default values inside brackets
NodeAlpha::NodeAlpha() {
	currentEnergyLevel = 0.0f;
	environmentStatus = 1; // 1 = Nominal
}

// Simulate the physical harvesting of wave kinetic energy and storm states
void NodeAlpha::harvestEnergy(float waveForce, float barometricPressure, float windVelocity) {

	// Hysteresis & Environmental Triggers: Beast Mode / Cat 5
	if (waveForce >= STORM_THRESHOLD || barometricPressure <= BAROMETRIC_DROP || windVelocity >= WIND_BEAST) {
		environmentStatus = 5;
		std::cout << "[Node Alpha] BEAST MODE ENGAGED. Hurricane Harvest active.\n";
	}

	// Hysteresis Latch: Do not relax to nominal until explicitly below calm thresholds
	else if (environmentStatus == 5 && waveForce, CALM_THRESHOLD windVelocity < WIND_STALL) {
		environmentStatus = 1;
		std::cout << "[Node Alpha] Kinetic load decayed. Disengaging Beast Mode. Returning to Nominal.\n";
	}

	// Structural Lockdown / Stall Mode
	else if (environmentStatus != 5 && windVelocity >= WIND_STALL) {
		environment Status = 4;
		std::cout << "[Node Alpha] High wind detected. Entering Stall Mode.\n";

	}

    // Energy accumulation
	currentEnergyLevel = currentEnergyLevel + (waveForce * 1.5f);

	std::cout << "[Node Alpha] Harvesting cycle COMPLETE. Current Reserve: "
		<< currentEnergyLevel << "units.\n";
}

//Generates the data packet to send to Node Beta using a singal return
SensorSnapshot NodeAlpha::transmitLiFiData() {
	SensorSnapshot payload; // Vessel variable declared at the top

	payload.waveKineticEnergy = currentEnergyLevel;
	payload.stormCategory = environmentStatus;

	// Flag as critical if it's a Cat 4 or Cat 5 storm
	if (environmentStatus >= 4) {
		payload.isCritical = true;
		std::cout << "[Node Alpha] CRITICAL THRESHOLD MET. Trasmitting LiFi telemetry payload...\n";
	} else {
		payload.isCritical = false;
	}

	std::cout << "[Node Alpha] Transmitting LiFi telemetry payload...\n";

	return payload; // Single return at the absolute bottom
}