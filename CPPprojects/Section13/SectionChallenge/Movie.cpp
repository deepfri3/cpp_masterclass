/**
 * @brief Movie class implementation
 * @author George Baker
 * @date 2020/10/08
 *
 */

#include "Movie.h"

Movie::Movie(std::string movie_name_val, std::string movie_rating_val, int watched_count_val)
    : movie_name {movie_name_val}, movie_rating {movie_rating_val}, watched_count{watched_count_val} {
    std::cout << "3 arg constructor called" << std::endl;
}

Movie::Movie(std::string movie_name_val)
    : Movie {movie_name_val,"NR"} {
    std::cout << "1 arg constructor called" << std::endl;
}

Movie::Movie()
    : Movie {"none","NR"} {
    std::cout << "default constructor called" << std::endl;
}

Movie::Movie(const Movie &movie)
    : Movie {movie.get_movie_name(), movie.get_movie_rating(), movie.get_watched_count()} {
    std::cout << "Movie " << this->movie_name << " copied." << std::endl;
}

void Movie::increase_watched_count() {
    //std::cout << movie_name << " watched " << watched_count << " times." << std::endl;
    this->watched_count++;
    //std::cout << movie_name << " watched " << watched_count << " times." << std::endl;
}

void Movie::reset_watched_count() {
    this->watched_count = 0;
    std::cout << movie_name << " watched count reset to 0." << std::endl;
}


