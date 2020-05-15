#pragma once
#include "Core.h"

namespace Falcon
{
	class FALCON_API Application
	{

	public:
		Application();
		virtual ~Application();

		void Run();

	};

	//To be defined in client
	Application* CreateApplication();

} //namespace Falcon