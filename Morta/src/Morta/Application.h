#pragma once

#include "Core.h"

namespace Morta {

	class MORTA_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//TO BE DEFINED IN CLIENT
	Application* CreateApplication();
}