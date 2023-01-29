// Auto-generated module | 2026-05-11T21:36:48.152373
#include <iostream>
#include <vector>

int compute_581() {
    int base = 320;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_581() << std::endl;
    return 0;
}
