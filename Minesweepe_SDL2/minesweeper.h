/*Singleton to encapsulate our minesweepr game*/
#pragma once
#include <string>
#include <iostream>
#include <SDL.h>
#include <SDL_ttf.h>
#include <SDL_mixer.h>

#include "boardDetails.h"
#include "menu.h"
#include "HUD.h"
#include "board.h"

extern Mix_Chunk* click;
extern Mix_Music* loseMusic;
extern Mix_Music* winMusic;
enum GameState { MENU, BOARD, RESET, EXIT };

class Minesweeper {
private:
    SDL_Window* mWindow;
    SDL_Renderer* mRenderer;
    GameState mGameState;
    BoardDetails mBoardDetails;

    void menuLoop();
    void boardLoop();

public:
    Minesweeper();
    void play();
    ~Minesweeper();

};