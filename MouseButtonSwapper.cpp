// MouseButtonSwapper.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <Windows.h>

int main(int argc, char* argv[]) {
    if (argc == 2)
    {
        if (strcmp(argv[1],"left"))
        {
            //Set main mouse button to left
            SwapMouseButton(0);
        }
        else if (strcmp(argv[1], "right"))
        {
            //Set main mouse button to right
            SwapMouseButton(1);
        }
        else 
        {
            return 999;
        }
    } 
    else 
    {
        // This set mouse button reversed but also returns 1 if it was
        // already reversed.
        if (SwapMouseButton(1) != 0)
        {
            // If it was already reversed, make it normal again
            SwapMouseButton(0);
        }
    }
    return 0;
}