

#include "Movies.h"

Movies::Movies() {
    this->movies = new std::vector<Movie*>;
}

Movies::~Movies() {
    std::cout << "Movies destructor called" << std::endl;
    delete this->movies;
}

bool Movies::find_movie (std::string movie_name_val) {
    for(const Movie *movie: *movies) {
        if(movie->get_movie_name() == movie_name_val) {
            std::cout << "Movie " << movie_name_val << " is in the collection." << std::endl;
            return true;
        }
    }
    return false;
}


bool Movies::add_movie (Movie *movie_val) {
    if(find_movie(movie_val->get_movie_name()) == false) {
        movies->push_back(movie_val);
        std::cout << "Movie added: " << movie_val->get_movie_name() << std::endl;
        return true;
    }
    return false;
}

bool Movies::add_movie (std::string movie_name_val
           ,std::string movie_rating_val
           ,int watched_count_val) {
    if(find_movie(movie_name_val) == false) {
        movies->push_back(new Movie {movie_name_val,movie_rating_val,watched_count_val});
        std::cout << "Movie added: " << movie_name_val << std::endl;
        return true;
    }
    return false;
}

bool Movies::increment_watched_count (std::string movie_name_val) {
    for(auto *movie: *movies) {
        if(movie->get_movie_name() == movie_name_val) {
            int temp = movie->get_watched_count();
            movie->increase_watched_count();
            std::cout << "Movie \"" << movie->get_movie_name()
                << "\" watch count updated " << temp << "->"
                << movie->get_watched_count() << std::endl;
            return true;
        }
    }
    return false;
}

void Movies::reset_watched_count(std::string movie_name_val) {
    for(auto *movie: *movies) {
        if(movie->get_movie_name() == movie_name_val) {
            int temp = movie->get_watched_count();
            movie->reset_watched_count();
            std::cout << "Movie \"" << movie->get_movie_name()
                << "\" watch count reset " << temp << "->"
                << movie->get_watched_count() << std::endl;
        }
    }
}

bool Movies::is_movie_available (std::string movie_name_val) {
    if(find_movie(movie_name_val)) {
        return true;
    }
    else {
        std::cout << "Movie is not in the collection." << std::endl;
        return false;
    }
}

void Movies::print_movies () {
    std::cout << std::endl;
    std::cout << "Movies:" << std::endl;
    int movie_number = 1;
    for(const auto *movie: *movies) {
        std::cout << movie_number << ": " << movie->get_movie_name() << ", "
            << movie->get_movie_rating() << ", watched: "
            << movie->get_watched_count() << std::endl;
        movie_number++;
    }
    std::cout << std::endl;
}
