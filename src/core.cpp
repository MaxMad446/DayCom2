// Auto-generated module | 2026-05-14T06:22:36.543582
#include <iostream>
#include <vector>

int compute_225() {
    int base = 358;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_225() << std::endl;
    return 0;
}
