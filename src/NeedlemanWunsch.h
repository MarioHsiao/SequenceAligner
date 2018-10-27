#ifndef NeedlemanWunsch_H
#define NeedlemanWunsch_H
#include <vector>
#include <map>
#include <string>
#include "../Matrixes/Scoring_Matrix.h"


class NeedlemanWunsch {
    int capacity;
    int gap_penalty;
    std::vector<std::vector<int> > scoringMatrix;
    std::vector<std::vector<int> > matrix;
    Scoring_Matrix& score;

    public:
        NeedlemanWunsch(int max_seq_size, int gap_penalty, Scoring_Matrix& s);
        int alignSequence(std::string a, std::string b);
};

#endif NeedlemanWunsch_H