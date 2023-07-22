// Auto-generated module | 2026-05-13T20:50:26.187173
#include <iostream>
#include <vector>

int compute_725() {
    int base = 361;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_725() << std::endl;
    return 0;
}
