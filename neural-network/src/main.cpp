#include <iostream>
#include <chrono>
#include <thread>

static bool isRunning = false;

const int FPS = 5;

// Macros
template <typename T>
auto seconds_to_duration(T seconds) {
	return std::chrono::duration<T, std::ratio<1>>(seconds);
}

void init() {
	isRunning = true;
}

void input() {

}

void update() {

}

void render() {
	std::cout << "Cyka" << std::endl;
}

int main() {

	init();

	while (isRunning) {

		auto start = std::chrono::system_clock::now();

		input();
		update();
		render();

		std::chrono::duration<double> elapsed = std::chrono::system_clock::now() - start;
		double delay = ( 1000 / FPS ) - std::chrono::duration<double>( elapsed ).count();

		std::this_thread::sleep_for( std::chrono::milliseconds( (long long) delay ) );
	}
}