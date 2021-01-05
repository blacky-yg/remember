/*
** EPITECH PROJECT, 2021
** linked_list
** File description:
** all functions for the simple linked list
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct data_t
{
    int nb;
    struct data_t *next;
} data_t;

typedef struct list_t
{
    data_t *data;
} list_t;

void display_list(list_t *list) {
    for (; list->data != NULL; list->data = list->data->next)
        printf("%d", list->data->nb);
    printf("\n");
}

void push(list_t *list, int nb)
{
    data_t *new_data = malloc(sizeof(data_t));

    new_data->nb = nb;
    new_data->next = list->data;
    list->data = new_data;
}

int main(void)
{
    data_t *data = malloc(sizeof(data_t));
    list_t *list = malloc(sizeof(list_t));

    data->nb = 5;
    data->next = NULL;
    list->data = data;
    display_list(list);
    push(list, 4);
    push(list, 3);
    push(list, 2);
    display_list(list);
    free(data);
    free(list);
    return (0);
}