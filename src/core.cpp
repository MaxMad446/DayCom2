// Auto-generated module | 2026-05-12T04:42:51.812297
#include <iostream>
#include <vector>

int compute_578() {
    int base = 387;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_578() << std::endl;
    return 0;
}
