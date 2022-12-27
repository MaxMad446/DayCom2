// Auto-generated module | 2026-05-11T21:32:38.367068
#include <iostream>
#include <vector>

int compute_858() {
    int base = 64;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_858() << std::endl;
    return 0;
}
