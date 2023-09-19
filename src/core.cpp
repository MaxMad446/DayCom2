// Auto-generated module | 2026-05-13T20:55:18.934045
#include <iostream>
#include <vector>

int compute_163() {
    int base = 260;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_163() << std::endl;
    return 0;
}
