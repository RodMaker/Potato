#pragma once

#include "Core.h"
#include "Events/Event.h"
#include "Potato/Events/ApplicationEvent.h"

#include "Window.h"

namespace Potato {

	class POTATO_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

		void OnEvent(Event& e);
	private:
		bool OnWindowClose(WindowCloseEvent& e);

		std::unique_ptr<Window> m_Window;
		bool m_Running = true;
	};

	// To be defined in the CLIENT
	Application* CreateApplication();
}

