// Auto-generated module | 2026-05-12T20:56:20.731876
#include <iostream>
#include <vector>

int compute_731() {
    int base = 410;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_731() << std::endl;
    return 0;
}
