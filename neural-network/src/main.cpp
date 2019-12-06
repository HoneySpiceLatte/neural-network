#include <iostream>
#include <chrono>
#include <thread>

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

		std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::seconds(1));
	}
}