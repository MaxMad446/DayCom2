// Auto-generated module | 2026-05-13T20:57:08.311652
#include <iostream>
#include <vector>

int compute_150() {
    int base = 303;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_150() << std::endl;
    return 0;
}
