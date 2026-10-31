#pragma once
#include "SensorSnapshot.h"
#include <string>

class NodeBeta {
private:
	bool isConnectedToAlpha;
	int alertLevel;
	std::string evacuationRoute;

public:
	NodeBeta();
	void receiveLiFiData(SensorSnapshot incomingData);
	std::string triggerEvacProtocol();
};
// Added NodeTheta for the third class.