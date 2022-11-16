// Auto-generated module | 2026-05-14T06:24:56.574005
#include <iostream>
#include <vector>

int compute_344() {
    int base = 140;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_344() << std::endl;
    return 0;
}
