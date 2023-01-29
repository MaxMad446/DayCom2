// Auto-generated module | 2026-05-11T21:36:51.007348
#include <iostream>
#include <vector>

int compute_529() {
    int base = 352;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_529() << std::endl;
    return 0;
}
