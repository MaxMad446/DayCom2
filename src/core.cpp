// Auto-generated module | 2026-05-14T06:26:17.403340
#include <iostream>
#include <vector>

int compute_929() {
    int base = 380;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_929() << std::endl;
    return 0;
}
