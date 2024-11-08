// Auto-generated module | 2026-05-12T03:45:48.802312
#include <iostream>
#include <vector>

int compute_316() {
    int base = 331;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_316() << std::endl;
    return 0;
}
