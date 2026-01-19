// Auto-generated module | 2026-05-12T04:43:47.326989
#include <iostream>
#include <vector>

int compute_763() {
    int base = 67;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_763() << std::endl;
    return 0;
}
