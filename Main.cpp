#include <iostream>
#include <raylib.h>
#include "roll.hpp"

using namespace std;


int main(){
    dice Kevin;

    InitWindow(800, 600, "Dice Roller");

    SetTargetFPS(60);

    Texture2D one = LoadTexture("Numbers/num1.png");
    Texture2D two = LoadTexture("Numbers/num2.png");
    Texture2D three = LoadTexture("Numbers/num3.png");
    Texture2D four = LoadTexture("Numbers/num4.png");
    Texture2D five = LoadTexture("Numbers/num5.png");
    Texture2D six = LoadTexture("Numbers/num6.png");

    while(!WindowShouldClose()){
    

        BeginDrawing();
        
        ClearBackground(WHITE);

        DrawText("Press Space to Roll the Dice", 190, 200, 30, BLACK);

        if (IsKeyPressed(KEY_SPACE)){
            Kevin.roll();
        }
        
        if (Kevin.num == 1){
            DrawTexture(one, 100, 100, WHITE);
        }
        else if (Kevin.num == 2){
            DrawTexture(two, 100, 100, WHITE);
        }
        else if (Kevin.num == 3){
            DrawTexture(three, 100, 100, WHITE);
        }
        else if (Kevin.num == 4){
            DrawTexture(four, 100, 100, WHITE);
        }
        else if (Kevin.num == 5){
            DrawTexture(five, 100, 100, WHITE);
        }
        else if (Kevin.num == 6){
            DrawTexture(six, 100, 100, WHITE);
        }

        EndDrawing();

    
    }
   

    

    CloseWindow();

    UnloadTexture(one);
    UnloadTexture(two);
    UnloadTexture(three);
    UnloadTexture(four);
    UnloadTexture(five);
    UnloadTexture(six);

    return 0;
}