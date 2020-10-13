/**
 * @brief Section 13 Challenge
 * @date 10/08/2020
 * @author George Baker
 *
 * For this challenge you are to develop the foundation for a program
 * for movie fanatics to keep track of what movies they have watched
 * and how many times they watched each movie.
 *
 * The program must support the following:
 *
 * class Movie - models a movie which includes
 * -Movie name
 * -Move rating (G, PG, PG-13, R)
 * -watched - the number of times the movie has been watched
 *
 * class Movies - models a collection of movie objects
 *
 * Obviously, Movies needs to know about Movie since it is a collection of
 * Movie object However, our main driver should only interact with the Movies
 * class.
 *
 * For example, a simple main should be able to:
 * - Create a Movies object
 * - ask the movies object to add a movie by providing the movie name, rating
 * and watched count
 * - ask the movies object to increment the watched count by 1 for a movie
 * given its name
 * - ask the movies object to display all of its movies.
 *
 * Additionally,
 * - if we try to add a movie whose name is already in the movie collection
 * we should display this error to the user.
 * - if we try to increment the watched count for a movie whose name is not
 * in the movies collection we should display this error to the user.
 *
 */

#include <iostream>
#include "Movie.h"
#include "Movies.h"

int main()
{
    Movie *movie1 = new Movie();
    movie1->set_movie_name("Movie1");
    movie1->set_movie_rating("PG-13");
    movie1->increase_watched_count();
    Movie *movie1copy = new Movie(*movie1);

    Movies collection;
    collection.add_movie(movie1);
    collection.add_movie(movie1copy);
    collection.add_movie(movie1);
    collection.add_movie("Movie2","PG");
    collection.add_movie("Movie2","PG");
    collection.add_movie("Movie3","R",3);
    collection.print_movies();
    collection.increment_watched_count("Movie1");
    collection.increment_watched_count("Movie3");
    collection.increment_watched_count("Movie2");
    collection.increment_watched_count("Movie4");
    collection.print_movies();
    collection.reset_watched_count("Movie2");
    collection.print_movies();
    collection.is_movie_available("Movie1");
    collection.is_movie_available("Movie4");

    delete movie1copy;
    delete movie1;

    return 0;
}
