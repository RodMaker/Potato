#pragma once

#include "Core.h"

namespace Potato {

	class __declspec(dllexport) Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in the CLIENT
	Application* CreateApplication();
}

