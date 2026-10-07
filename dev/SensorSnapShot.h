#pragma once

// Struct to hold the telemetry data sent via the simulated LiFi laser beam
struct SensorSnapshot
{
	float waveKineticEnergy;
	int stormCategory;
	bool isCritical;
};