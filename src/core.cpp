// Auto-generated module | 2026-05-11T20:52:51.582801
#include <iostream>
#include <vector>

int compute_236() {
    int base = 153;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_236() << std::endl;
    return 0;
}
