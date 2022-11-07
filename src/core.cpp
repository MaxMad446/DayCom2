// Auto-generated module | 2026-05-11T21:25:57.777150
#include <iostream>
#include <vector>

int compute_229() {
    int base = 272;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_229() << std::endl;
    return 0;
}
