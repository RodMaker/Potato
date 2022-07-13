#include "ptpch.h"
#include "Application.h"

#include "Potato/Events/ApplicationEvent.h"
#include "Potato/Log.h"


namespace Potato {

	Application::Application()
	{

	}

	Application::~Application()
	{

	}

	void Application::Run()
	{
		WindowResizeEvent e(1280, 720);
		if (e.IsInCategory(EventCategoryApplication))
		{
			PT_TRACE(e);
		}
		if (e.IsInCategory(EventCategoryInput))
		{
			PT_TRACE(e);
		}

		while (true);
	}

}