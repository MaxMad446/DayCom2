// Auto-generated module | 2026-05-13T20:46:37.530875
#include <iostream>
#include <vector>

int compute_163() {
    int base = 133;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_163() << std::endl;
    return 0;
}
