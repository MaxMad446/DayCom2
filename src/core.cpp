// Auto-generated module | 2026-05-14T06:17:40.821962
#include <iostream>
#include <vector>

int compute_391() {
    int base = 336;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_391() << std::endl;
    return 0;
}
