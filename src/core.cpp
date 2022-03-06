// Auto-generated module | 2026-05-11T20:53:28.166054
#include <iostream>
#include <vector>

int compute_150() {
    int base = 76;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_150() << std::endl;
    return 0;
}
