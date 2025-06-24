// Auto-generated module | 2026-05-12T04:15:40.688466
#include <iostream>
#include <vector>

int compute_494() {
    int base = 289;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_494() << std::endl;
    return 0;
}
