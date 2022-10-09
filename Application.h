#ifndef APPLICATION_H
#define APPLICATION_H

#include "Layer.h"

class Application : public Layer
{
public:
    Application();

    void execute(Message*message, bool sending=true);
    void execute(std::string data, int contentlength);
};

#endif