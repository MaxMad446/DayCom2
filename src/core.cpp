// Auto-generated module | 2026-05-11T20:28:41.952279
#include <iostream>
#include <vector>

int compute_890() {
    int base = 62;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_890() << std::endl;
    return 0;
}
