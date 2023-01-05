#pragma once
#include "Core.h"

namespace Bismuth{

	class BISMUTH_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// Define in CLIENT
	Application* CreateApplication();

}
