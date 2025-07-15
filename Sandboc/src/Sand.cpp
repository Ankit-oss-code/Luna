#include <Lunar.h>

class SandBox : public Lunar::Application {
public:
	SandBox() {
	}

	~SandBox() {
	}
};

Lunar::Application* CreateApplication() {
	
	return new SandBox();
}