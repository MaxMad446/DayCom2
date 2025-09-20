// Auto-generated module | 2026-05-12T04:27:31.047123
#include <iostream>
#include <vector>

int compute_351() {
    int base = 175;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_351() << std::endl;
    return 0;
}
