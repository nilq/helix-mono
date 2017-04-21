#ifndef app_controller
#define app_controller
#include <mono.h>

class AppController : public mono::IApplication {
public:
	mono::ui::TextLabelView label;void main_loop ();void reset (); AppController ();void monoWakeFromReset ();void monoWillGotoSleep ();void monoWakeFromSleep ();
};
#endif