#pragma once
#include "Application.h"
#include <stdio.h>

#ifdef FAL_PLATFORM_WINDOWS

extern Falcon::Application* Falcon::CreateApplication();

void main(int argc, char** argv)
{
	printf("Falcon Engine Starting...");
	auto app = Falcon::CreateApplication();
	app->Run();
	delete app;
}

#endif