#include "Arduino.h"
#include "../Animation.h"

#define SETTINGS_PIXEL_SECONDARY_COLOR 17

class MenuSecondaryColor : public Animation
{

  public:
    void setup()
    {
        on = false;
    }

    int getInterval()
    {
        return 150;
    }

    bool draw()
    {

        pixels.clear();

        on = !on;

        if (on)
        {
            setInsidePixelsColorToSecondary();
        }
        setOutsidePixelsColorToPrimary();

        pixels.setPixelColor(SETTINGS_PIXEL_SECONDARY_COLOR, 255, 255, 255);
        pixels.show();

        return on;
    }

  private:
    byte on;
};
