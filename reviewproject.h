#include <iostream>

class Student {
    public:
        std::string names;
        float assignments;
        float Aweights;
        float labs;
        float Lweights;
        float projects;
        float Pweights;
        float finals;
        float Fweights;
        int finalGrade;

        
        void name(std::string x);
        void assignment(int x);
        void weights(int A, int L, int P, int F);
        void project(int x);
        void lab(int x);
        void final(int x);

};
