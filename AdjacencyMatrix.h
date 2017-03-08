#ifndef __AdjacencyMatrix_h__
#define __AdjacencyMatrix_h__
#include <iostream>

class AdjacencyMatrix
{
	private:
		int ** m_Matrix;
		int m_PeakCount;
		
	public:
		////KONSTRUKTORY//////////////////////////////
		AdjacencyMatrix(int peakcount);             // macierz wpisywana z konsoli
		~AdjacencyMatrix();                         // destruktor (musi miec delete [])
		AdjacencyMatrix(std::fstream AMatrix);      // macierz wpisywana z pliku
		////METODY////////////////////////////////////
		int **getAdjacencyMatrixPointer();          // wzraca wskaŸnik na macierz
		int getPeakCount();                         // wzraca iloœæ wêz³ów
		////OPERATORY/////////////////////////////////////////////////////
		AdjacencyMatrix & operator = (IncidanceMatrix & const IMatrix)	// przypisuje obiektowi klasy AdjacencyMatrix obiekt klasy IncidanceMatrix
		AdjacencyMatrix & operator = (AdjacencyList & const Alist)      // przypisuje obiektowi klasy AdjacencyMatrix obiekt klasy AdjacencyList
};

#endif 
