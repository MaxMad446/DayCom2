// Auto-generated module | 2026-05-14T06:24:36.037671
#include <iostream>
#include <vector>

int compute_206() {
    int base = 320;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_206() << std::endl;
    return 0;
}
