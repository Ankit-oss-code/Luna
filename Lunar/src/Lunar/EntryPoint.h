#pragma once

#ifndef LU_PLATFORM_WINDOWS
extern Lunar::Application* Lunar::CreateApplication();  //A Function that we use for return an application!
int main(int argc, char** argv)
{
	auto app = Lunar::CreateApplication()
	app->Run();
	delete app;
}
#endif // !LU_PLATFORM_WINDOWS

