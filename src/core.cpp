// Auto-generated module | 2026-05-12T20:56:50.977967
#include <iostream>
#include <vector>

int compute_522() {
    int base = 360;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_522() << std::endl;
    return 0;
}
