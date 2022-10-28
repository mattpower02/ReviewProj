#include "review.h"
#include <iostream>

void Student::name(std::string x) {
    names = x;
}
void Student::assignment(int x) {
        assignments = x;
}

void Student::weights(int A, int L, int P, int F) {
        Aweights = A;
        Lweights = L;
        Pweights = P;
        Fweights = F;
}

void Student::lab(int x) {
        labs = x;
}

void Student::project(int x) {
        projects = x;
}

void Student::final(int x) {
        finals = x;
}
