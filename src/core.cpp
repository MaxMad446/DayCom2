// Auto-generated module | 2026-05-13T20:28:54.037925
#include <iostream>
#include <vector>

int compute_272() {
    int base = 200;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_272() << std::endl;
    return 0;
}
