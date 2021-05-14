#include <Morta.h>

class Sandbox : public Morta::Application{

public:
	Sandbox() {

	}

	~Sandbox() {

	}
};

Morta::Application* Morta::CreateApplication() {
	return new Sandbox();
}