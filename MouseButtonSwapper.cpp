// MouseButtonSwapper.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <Windows.h>

int main(){
    // This set mouse button reversed but also returns 1 if it was
    // already reversed.
    if (SwapMouseButton(1) != 0)
    {
        // If it was already reversed, make it normal again
        SwapMouseButton(0);
    }
    return 0;
}