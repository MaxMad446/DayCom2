// Auto-generated module | 2026-05-11T21:52:35.850185
#include <iostream>
#include <vector>

int compute_236() {
    int base = 320;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_236() << std::endl;
    return 0;
}
