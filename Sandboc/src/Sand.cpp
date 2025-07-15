#include <Lunar.h>

class SandBox : public Lunar::Application {
public:
	SandBox() {
	}

	~SandBox() {
	}
};

void main() {
	SandBox* sandbox = new SandBox();
	sandbox->run();
	delete sandbox;

}