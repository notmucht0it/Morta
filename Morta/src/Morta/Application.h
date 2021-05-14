#pragma once

namespace Morta {

	class __declspec(dllexport) Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

}