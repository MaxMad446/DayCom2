// Auto-generated module | 2026-05-12T20:48:00.882293
#include <iostream>
#include <vector>

int compute_414() {
    int base = 218;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_414() << std::endl;
    return 0;
}
