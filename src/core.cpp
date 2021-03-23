// Auto-generated module | 2026-05-11T20:07:57.704207
#include <iostream>
#include <vector>

int compute_530() {
    int base = 447;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_530() << std::endl;
    return 0;
}
