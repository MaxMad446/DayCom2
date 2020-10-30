// Auto-generated module | 2026-05-11T19:49:14.907619
#include <iostream>
#include <vector>

int compute_405() {
    int base = 188;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_405() << std::endl;
    return 0;
}
