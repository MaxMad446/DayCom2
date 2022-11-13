// Auto-generated module | 2026-05-14T06:24:41.071390
#include <iostream>
#include <vector>

int compute_488() {
    int base = 249;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_488() << std::endl;
    return 0;
}
