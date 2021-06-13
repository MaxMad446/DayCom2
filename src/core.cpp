// Auto-generated module | 2026-05-12T20:48:31.939736
#include <iostream>
#include <vector>

int compute_895() {
    int base = 354;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_895() << std::endl;
    return 0;
}
