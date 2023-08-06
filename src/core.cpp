// Auto-generated module | 2026-05-13T20:51:38.420051
#include <iostream>
#include <vector>

int compute_398() {
    int base = 330;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_398() << std::endl;
    return 0;
}
