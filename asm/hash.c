/*
** EPITECH PROJECT, 2023
** hash.c
** File description:
** hashing function
*/
/*
 _____               __      __
|  __ \              \ \    / /
| |__) |  __ _  ___   \ \  / /   ___   __ _   __ _  _ __
|  ___/  / _` |/ __|   \ \/ /   / _ \ / _` | / _` || '_ \
| |     | (_| |\__ \    \  /   |  __/| (_| || (_| || | | |
|_|      \__,_||___/     \/     \___| \__, | \__,_||_| |_|
                                       __/ |
                                      |___/
*/

#include "asm.h"

unsigned long hash(const char *const str)
{
    unsigned long hash = 5381;
    int c;
    while ((c = (unsigned char)*str++))
        hash = ((hash << 5) + hash) + (size_t)c;
    return hash % TABLE_SIZE;
}

/*
─▄▀▀▀▀▄─█──█────▄▀▀█─▄▀▀▀▀▄─█▀▀▄
─█────█─█──█────█────█────█─█──█
─█────█─█▀▀█────█─▄▄─█────█─█──█
─▀▄▄▄▄▀─█──█────▀▄▄█─▀▄▄▄▄▀─█▄▄▀

─────────▄██████▀▀▀▀▀▀▄
─────▄█████████▄───────▀▀▄▄
──▄█████████████───────────▀▀▄
▄██████████████─▄▀───▀▄─▀▄▄▄──▀▄
███████████████──▄▀─▀▄▄▄▄▄▄────█
█████████████████▀█──▄█▄▄▄──────█
███████████──█▀█──▀▄─█─█─█───────█
████████████████───▀█─▀██▄▄──────█
█████████████████──▄─▀█▄─────▄───█
█████████████████▀███▀▀─▀▄────█──█
████████████████──────────█──▄▀──█
████████████████▄▀▀▀▀▀▀▄──█──────█
████████████████▀▀▀▀▀▀▀▄──█──────█
▀████████████████▀▀▀▀▀▀──────────█
──███████████████▀▀─────█──────▄▀
──▀█████████████────────█────▄▀
────▀████████████▄───▄▄█▀─▄█▀
──────▀████████████▀▀▀──▄███
──────████████████████████─█
─────████████████████████──█
────████████████████████───█
────██████████████████─────█
────██████████████████─────█
────██████████████████─────█
────██████████████████─────█
────██████████████████▄▄▄▄▄█

─────────────█─────█─█──█─█───█
─────────────█─────█─█──█─▀█─█▀
─────────────█─▄█▄─█─█▀▀█──▀█▀
─────────────██▀─▀██─█──█───█
*/
