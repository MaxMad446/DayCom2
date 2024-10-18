// Auto-generated module | 2026-05-12T03:43:06.224587
#include <iostream>
#include <vector>

int compute_357() {
    int base = 276;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_357() << std::endl;
    return 0;
}
