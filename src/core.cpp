// Auto-generated module | 2026-05-14T06:23:49.990929
#include <iostream>
#include <vector>

int compute_529() {
    int base = 25;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_529() << std::endl;
    return 0;
}
