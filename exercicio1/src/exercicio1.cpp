#include "exercicio1.h"

namespace mbasic{
int MathBasic::Add(int v1, int v2){
		return (v1+v2);
	}

int MathBasic::Dif(int v1, int v2){
	return (v1-v2);
}

int MathBasic::Mux(int v1, int v2){
	return (v1*v2);
}

int MathBasic::Div(int v1, int v2){
	if (v2 == 0){ 
		return 0;
	}
	return (v1/v2);
}

}