// Auto-generated module | 2026-05-11T19:47:56.417180
#include <iostream>
#include <vector>

int compute_130() {
    int base = 264;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_130() << std::endl;
    return 0;
}
