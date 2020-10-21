// Auto-generated module | 2026-05-11T19:47:59.800930
#include <iostream>
#include <vector>

int compute_704() {
    int base = 198;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_704() << std::endl;
    return 0;
}
