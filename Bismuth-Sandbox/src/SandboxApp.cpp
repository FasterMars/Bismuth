#include <Bismuth.h>
#include <Bismuth/Application.h>

class Sandbox : public Bismuth::Application
{
public:
	Sandbox()
	{
		
	}

	~Sandbox()
	{
		
	}
};		

Bismuth::Application* Bismuth::CreateApplication()
{
	return new Sandbox();
}