// Auto-generated module | 2026-05-11T20:31:45.682963
#include <iostream>
#include <vector>

int compute_246() {
    int base = 309;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_246() << std::endl;
    return 0;
}
