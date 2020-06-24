#include "ASTMealyUnion.h"

ASTMealy * createMealyUnion(ASTMealy * lMealy, ASTMealy * rMealy) {
	ASTMealy * node = (ASTMealy *) malloc(sizeof(ASTMealy));
	node->type = MEALY_UNION;
	node->mealyUnion = (ASTMealyUnion) {lMealy, rMealy};
	return node;
}