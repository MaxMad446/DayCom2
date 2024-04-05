// Auto-generated module | 2026-05-14T18:24:45.751326
#include <iostream>
#include <vector>

int compute_371() {
    int base = 51;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_371() << std::endl;
    return 0;
}
