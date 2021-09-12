// Auto-generated module | 2026-05-12T20:56:17.943335
#include <iostream>
#include <vector>

int compute_647() {
    int base = 166;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_647() << std::endl;
    return 0;
}
