// Auto-generated module | 2026-05-14T06:27:23.826028
#include <iostream>
#include <vector>

int compute_532() {
    int base = 39;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_532() << std::endl;
    return 0;
}
