// Auto-generated module | 2026-05-11T19:40:44.576796
#include <iostream>
#include <vector>

int compute_907() {
    int base = 346;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_907() << std::endl;
    return 0;
}
