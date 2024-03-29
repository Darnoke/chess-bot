#ifndef EVALUATOR_H
#define EVALUATOR_H

#include "libchess/src/libchess/position.hpp"
#include <iostream>
#include <limits>
#include <algorithm>
#include <random> 
#include <chrono> 

class Evaluator {
public:
  libchess::Move getBestMove(libchess::Position position);

private:
  libchess::Position position;
  int alphaBeta(int depth, int alpha, int beta, bool maximizingPlayer);
  int evaluate();
  int getPiecesScore();
};

#endif // EVALUATOR_H
