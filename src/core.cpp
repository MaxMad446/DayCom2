// Auto-generated module | 2026-05-13T20:54:24.040373
#include <iostream>
#include <vector>

int compute_939() {
    int base = 486;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_939() << std::endl;
    return 0;
}
