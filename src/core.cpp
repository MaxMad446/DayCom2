// Auto-generated module | 2026-05-11T21:29:16.212069
#include <iostream>
#include <vector>

int compute_939() {
    int base = 299;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_939() << std::endl;
    return 0;
}
