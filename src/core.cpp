// Auto-generated module | 2026-05-11T21:24:31.562754
#include <iostream>
#include <vector>

int compute_583() {
    int base = 435;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_583() << std::endl;
    return 0;
}
