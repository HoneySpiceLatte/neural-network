#include "engine/window.h"

bool Window::init() {

	// Setup WNDCLASSEX Object
	WNDCLASSEX wc;
	wc.cbClsExtra = NULL;
	wc.cbSize = sizeof(WNDCLASSEX);
	wc.cbWndExtra = NULL;
	wc.hbrBackground = (HBRUSH)COLOR_WINDOW;
	wc.hCursor = LoadCursor(NULL, IDC_ARROW);
	wc.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wc.hIconSm = LoadIcon(NULL, IDI_APPLICATION);
	wc.hInstance = NULL;
	wc.lpszClassName = "MyWindowClass";
	wc.lpszMenuName = "";
	wc.style = NULL;

	if (!::RegisterClassEx(&wc)) return false; // If registration fails, return false

	::CreateWindowEx(
		WS_EX_OVERLAPPEDWINDOW,
		"MyWindowClass",
		"My Application", // Application title
		WS_OVERLAPPEDWINDOW,
		CW_USEDEFAULT,
		CW_USEDEFAULT,
		1024, 768, // Screen dimensions
		NULL, NULL, NULL, NULL);

	return true;
}

bool Window::release() {
	return true;
}