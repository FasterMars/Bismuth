#pragma once
#include "Application.h"

#ifdef BS_PLATFORM_WINDOWS

extern Bismuth::Application* Bismuth::CreateApplication();

int main(int argc, char** argv)
{
    Bismuth::Log::init();
    BS_CORE_WARN("Initialized Log!");
    
    int a = 5;

    BS_INFO("Hello! Var={0}", a);

 	auto app = Bismuth::CreateApplication();
 	app->Run();
	delete app;
}

#endif // BS_PLATFORM_WINDOWS