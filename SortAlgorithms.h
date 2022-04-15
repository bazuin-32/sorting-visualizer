#pragma once
#include <vector>
#include "Sortable.h"

namespace algo {
	void bubbleSort(std::vector<Sortable>& sortElements, int timeSleep);
	void selectionSort(std::vector<Sortable>& sortElements, int timeSleep);
}

namespace algoUtils {
	void swap(std::vector<Sortable>& sortElements, int timeSleep, Sortable& num1, Sortable& num2);
}