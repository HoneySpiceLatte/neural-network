#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

static bool isRunning = false;

void init() {
	isRunning = true;
}

void input() {

}

void update() {

}

void draw() {

}

int main() {

	init();

	while (isRunning) {

		// Game logic
		input();
		update();
		draw();

		this_thread::sleep_until(chrono::system_clock::now() + chrono::seconds(1));
	}
}