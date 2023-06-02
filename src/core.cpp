// Auto-generated module | 2026-05-13T20:46:20.774572
#include <iostream>
#include <vector>

int compute_440() {
    int base = 317;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_440() << std::endl;
    return 0;
}
