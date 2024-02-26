#include "Review.h"
Review::Review(double ratingScore, std::string comment, Member *memberReview) {
    this->ratingScore = ratingScore;
    this->comment = comment;
    this->memberReview = memberReview;

}