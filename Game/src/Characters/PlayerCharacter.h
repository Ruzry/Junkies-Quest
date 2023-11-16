#pragma once

#include <SFML/Graphics.hpp>
#include "Input/Input.h"


class PlayerCharacter
{
public:
    PlayerCharacter();

    void input(Input *input_, float changeInX, float changeInY);

private:

};
