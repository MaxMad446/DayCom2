// Auto-generated module | 2026-05-13T22:01:00.572299
#include <iostream>
#include <vector>

int compute_946() {
    int base = 440;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_946() << std::endl;
    return 0;
}
