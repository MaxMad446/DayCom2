// Auto-generated module | 2026-05-11T20:12:08.090874
#include <iostream>
#include <vector>

int compute_750() {
    int base = 317;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_750() << std::endl;
    return 0;
}
