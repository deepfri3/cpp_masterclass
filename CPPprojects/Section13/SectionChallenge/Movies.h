/**
 * @brief Section 13 Challenge
 * @class Movies
 * @author George Baker
 * @date 2020/10/12
 *
 */

#ifndef _MOVIES_H_
#define _MOVIES_H_

#include "Movie.h"
#include <vector>

class Movies {
    private:
        std::vector<Movie*> *movies;
        bool find_movie (std::string movie_name_val);
    public:
        Movies();
        ~Movies();
        bool add_movie (Movie *movie_val);
        bool add_movie (std::string movie_name_val
                       ,std::string movie_rating_val
                       ,int watched_count_val = 0 );
        bool increment_watched_count (std::string movie_name_val);
        void reset_watched_count (std::string movie_name_val);
        bool is_movie_available (std::string movie_name_val);
        void print_movies ();
};

#endif // #ifndef _MOVIES_H_

