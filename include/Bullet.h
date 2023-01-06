#ifndef BULLET_H
#define BULLET_H

#include "Constants.h"
#include <SDL2/SDL.h>
#include "Session.h"
#include "Component.h"
#include <SDL2/SDL_image.h>
#include "System.h"
#include <string>

extern cwing::Session ses;

class Bullet: public cwing::Component {

public:
    static Bullet* getInstance(int x, int y) {
        return new Bullet(x, y);
    }
    Bullet(int x, int y);
    ~Bullet();
    void draw() const;
    void tick();

private:
    int mouse_x;
    int mouse_y;
    SDL_Texture* texture;
    int counter = 0;
    Mix_Chunk* sound;
    mutable bool sound_played;
};

#endif 
