#pragma once

#ifdef MR_PLATFORM_WINDOWS

extern Morta::Application* Morta::CreateApplication();

int main(int argc, char** argv) {

	auto app = Morta::CreateApplication();
	app->Run();
	delete app;

}

#endif