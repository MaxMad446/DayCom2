// Auto-generated module | 2026-05-11T19:44:27.471534
#include <iostream>
#include <vector>

int compute_595() {
    int base = 246;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_595() << std::endl;
    return 0;
}
