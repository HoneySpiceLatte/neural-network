#ifndef ENGINE_WINDOW_H_
#define ENGINE_WINDOW_H_

#include <Windows.h>

class Window {
	public:
		Window();
		~Window();

		// Initializes the Window
		bool init();

		// Releases the Window
		bool release();

	private:
		HWND m_hwnd;
};

#endif