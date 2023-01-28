// Auto-generated module | 2026-05-11T21:36:41.971150
#include <iostream>
#include <vector>

int compute_159() {
    int base = 255;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_159() << std::endl;
    return 0;
}
