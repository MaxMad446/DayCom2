// Auto-generated module | 2026-05-13T20:58:12.719493
#include <iostream>
#include <vector>

int compute_819() {
    int base = 43;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_819() << std::endl;
    return 0;
}
