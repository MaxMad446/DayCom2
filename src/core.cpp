// Auto-generated module | 2026-05-13T20:48:49.713841
#include <iostream>
#include <vector>

int compute_670() {
    int base = 197;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_670() << std::endl;
    return 0;
}
