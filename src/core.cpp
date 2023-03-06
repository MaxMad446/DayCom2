// Auto-generated module | 2026-05-13T20:32:20.543965
#include <iostream>
#include <vector>

int compute_991() {
    int base = 382;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_991() << std::endl;
    return 0;
}
