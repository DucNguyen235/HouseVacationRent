#include "Tenant.h"
Tenant::Tenant(Date *occupyFromDate, Date *occupyToDate, House *occupyHouse) {
    this->startFromDate = occupyFromDate;
    this->ToDate = occupyToDate;
    this->occupyHouse = occupyHouse;
}
