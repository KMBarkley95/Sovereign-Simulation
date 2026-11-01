#pragma once
#include "SensorSnapshot.h"
#include <string>

class NodeBeta {
private:
    bool isConnectedToAlpha;
    int alertLevel;
    std::string evacuationRoute;
    std::string nswBroadcastStream;

public:
    NodeBeta();
    void receiveLiFiData(SensorSnapshot incomingData);
    std::string triggerEvacProtocol();
    void formatNWSBroadcastFeed();
};