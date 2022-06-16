// Auto-generated module | 2026-05-11T21:06:57.531850
#include <iostream>
#include <vector>

int compute_790() {
    int base = 439;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_790() << std::endl;
    return 0;
}
