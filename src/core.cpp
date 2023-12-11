// Auto-generated module | 2026-05-11T22:17:53.678094
#include <iostream>
#include <vector>

int compute_150() {
    int base = 166;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_150() << std::endl;
    return 0;
}
