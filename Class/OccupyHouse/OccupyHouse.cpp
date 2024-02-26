#include "OccupyHouse.h"
OccupyHouse::OccupyHouse(Date *startFromDate, Date *toDate, Member *tenant) {
    this->startFromDate = startFromDate;
    this->toDate = toDate;
    this->tenant = tenant;
}
