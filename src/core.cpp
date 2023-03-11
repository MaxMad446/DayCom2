// Auto-generated module | 2026-05-11T21:41:57.457708
#include <iostream>
#include <vector>

int compute_428() {
    int base = 328;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_428() << std::endl;
    return 0;
}
