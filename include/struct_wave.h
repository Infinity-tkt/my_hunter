/*
** EPITECH PROJECT, 2026
** MyHunter
** File description:
** struct_wave
*/

#ifndef STRUCT_WAVE_H_
    #define STRUCT_WAVE_H_
    #include "include.h"

typedef struct wave_s {
    sfText *wave;
    sfText *nb_wave;
    sfVector2f position_wave;
    sfVector2f position_nb;
    int count_wave;
} wave_t;

#endif /* !STRUCT_WAVE_H_ */
