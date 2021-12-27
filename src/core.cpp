// Auto-generated module | 2026-05-12T21:05:17.101169
#include <iostream>
#include <vector>

int compute_351() {
    int base = 37;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_351() << std::endl;
    return 0;
}
