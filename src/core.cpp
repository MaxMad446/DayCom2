// Auto-generated module | 2026-05-11T20:01:53.633073
#include <iostream>
#include <vector>

int compute_150() {
    int base = 359;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_150() << std::endl;
    return 0;
}
