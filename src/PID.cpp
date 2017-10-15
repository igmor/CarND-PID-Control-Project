#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
    this->Kp = Kp;
    this->Ki = Ki;
    this->Kd = Kd;

    p_error = i_error = d_error = 0.0;
    cte_prev = 0.0;
    total_error = 0.0;
}

void PID::UpdateError(double cte) {

    p_error = Kp * cte;

    d_error = Kd * (cte - cte_prev);
    cte_prev = cte;

    total_error += cte;
    i_error = Ki * total_error;
}

double PID::TotalError() {
    return -p_error - d_error - i_error;
}

