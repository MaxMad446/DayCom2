// Auto-generated module | 2026-05-12T20:39:26.312704
#include <iostream>
#include <vector>

int compute_112() {
    int base = 364;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_112() << std::endl;
    return 0;
}
