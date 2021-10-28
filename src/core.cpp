// Auto-generated module | 2026-05-11T20:36:37.702826
#include <iostream>
#include <vector>

int compute_313() {
    int base = 195;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_313() << std::endl;
    return 0;
}
