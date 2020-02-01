#include "Engine/Engine.h"

#include <iostream>

using namespace std;

int main()
{
    cout << "Hello World!\n";
	
	Engine engine;
			
	engine.Initialize('hans');

	while (true) {
		engine.Update();
		engine.Render();
	}

	return 0;
}