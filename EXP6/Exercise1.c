/*
Develop a program using pthread to concatenate multiple strings passed to the thread function
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<pthread.h>

#define MAX_LEN 1024

//Making a structure accordig to our desired output and the data with which we are going to work
typedef struct
{
    char **string; //Array of strings
    int count; //Number of strings
    char *result;//Resultant concatenated string
} ThreadData;

void *concatenateString(void *arg)
{
    ThreadData *data = (ThreadData *)arg;
    data->result[0] = '\0'; //Initialize result string to empty

    for(int i = 0;i<data->count ;i++)
    {
        stract(data->result, data->string[i]);//Concatinate each string
    }

    pthread_exit(NULL);// Exit the thread;
}