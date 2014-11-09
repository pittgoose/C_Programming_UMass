#include <stdbool.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

// *******************************************************************
//9)   Most people enjoy watching movies these days, whether its the classics or modern ones.
//Develop a set of structures that could be used to model the information about a movie collection.
//What type of information would you want to collect and store about a movie?   What would be the right
//types in C for that information?  Define supporting structures as needed and have one final structure type that
//is made up of various members (some members may be on some structure type, others may be simple integers,
//                               floats, chars, arrays, etc).
//
//No program is needed although you might want to create a simple main function
//and include your structure types just to test that everything compiles.
//
//This question is similar to the final question on the midterm, but you have learned about many different
//types since then.    Here is a template to use to get started and indicates what I am looking for in your answer.
//Use everything you learned this semester, especially the last set of lectures notes from Chapters 13 - 17.
//
//
///* add supporting structures - expect many structure types here ... date is good example */
//
//
//struct date
//{
//    int month;
//    int day;
//    int year;
//};
//
//
///* add other supporting structures */
//
//
///* Final structure, such as struct movie */
//struct movie
//{
//
//    /* some members may be a structure type themselves, here is an example */
//    struct date releaseDate;   /* the date the movie was released */
//
//
//    /* other members may be ints, floats, doubles, chars, enum, ...  */
//    char title [100];   /* the title of the move */
//
//
//    /* add others */
//
//};
//
//
//int main  (  )
//{
//
//    struct movie myMovie [1000];
//
//    /* nothing else needs to be added to main */
//
//    return (0);
//
//};
// *******************************************************************

struct date
{
    int month;
    int day;
    int year;
};

struct name {
    char first_name[20];
    char last_name[40];
};

struct actor {
    struct name actor_name;
    struct date birth_date;
};

struct character {
    struct name actor_name;
    struct name character_name;
};

struct movie {
    char title[100];
    struct character top_25_cast[25];
    struct date release_date;
    struct date to_dvd_date;
    struct name producer_name;
    struct name director_name;
    char synopsis[1000];
    int rating;
    char primary_genre[10];
    char secondary_genre[10];
    
    struct movie *next;
};



int main (void)
{
    struct movie my_movie;
    return 0;
}
















