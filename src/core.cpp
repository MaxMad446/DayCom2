// Auto-generated module | 2026-05-12T04:13:34.584660
#include <iostream>
#include <vector>

int compute_434() {
    int base = 393;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_434() << std::endl;
    return 0;
}
