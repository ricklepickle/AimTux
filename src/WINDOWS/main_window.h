#ifndef __MAIN_WINDOW_H_
#define __MAIN_WINDOW_H_

class MainWindow;

#include "../UI/stdui.h"
#include "../atgui.h"


class MainWindow : public Window
{
private:
	Button* aimbot_button;
	Button* esp_button;
	Button* hvh_button;
	Button* misc_button;
	Button* load_button;
	Button* save_button;

	void aimbot_button_clicked ();
	void esp_button_clicked ();
	void hvh_button_clicked ();
	void misc_button_clicked ();
	void load_button_clicked ();
	void save_button_clicked ();

public:
	MainWindow (std::string title, Vector2D size, Vector2D position, Color backgroundColor);
};

#endif