#include <Falcon.h>

class Sandbox : public Falcon::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Falcon::Application* Falcon::CreateApplication()
{
	return new Sandbox();
}
