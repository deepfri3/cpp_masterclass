/**
 * @brief Section 13 Challenge
 * @class movie
 * @author George Baker
 * @date 2020/10/08
 *
 * class Movie - models a movie which includes
 * -Movie name
 * -Move rating (G, PG, PG-13, R)
 * -watched - the number of times the movie has been watched
 *
 */

#ifndef _MOVIE_H_
#define _MOVIE_H_

 /// Includes
#include <string>
#include <iostream>

class Movie {
    private:
        std::string movie_name;
        std::string movie_rating;
        int watched_count;

    public:
        /// Constructors
        Movie (std::string movie_name_val,
               std::string movie_rating_val,
               int watched_count_val = 0);

        Movie (std::string movie_name_val);
        Movie (const Movie &movie); // Copy Constructor
        Movie ();

        /// Getters / Setters
        void set_movie_name(std::string movie_name_val) {
            movie_name = movie_name_val;
        }

        std::string get_movie_name() const {
            return movie_name;
        }

        void set_movie_rating(std::string movie_rating_val) {
            movie_rating = movie_rating_val;
        }

        std::string get_movie_rating() const {
            return movie_rating;
        }

        int get_watched_count() const {
            return watched_count;
        }

        /// prototypes
        void increase_watched_count();
        void reset_watched_count();
};

#endif // #ifndef _MOVIE_H_
