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





int main (void)
{
    struct baseball_stats myBaseBallStats (int singles, int doubles, int triples, int homers, int at_bats);
    struct baseball_stats my_stats = myBaseBallStats(50, 20, 3, 14, 100);
    printf("total bases = %i\nbatting average = %1.3f\nhome run ratio = %1.3f\nslugging average = %1.3f\n\n", my_stats.total_bases, my_stats.batting_average, my_stats.home_run_ratio, my_stats.slugging_average);
    
    return 0;
}
















