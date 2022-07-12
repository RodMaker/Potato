#pragma once

#ifdef PT_PLATFORM_WINDOWS

extern Potato::Application* Potato::CreateApplication();

int main(int argc, char** argv)
{
	Potato::Log::Init();
	PT_CORE_WARN("Initialized Log!");
	int a = 5;
	PT_INFO("Hello! Var={0}", a);

	auto app = Potato::CreateApplication();
	app->Run();
	delete app;
}

#endif