// Auto-generated module | 2026-05-11T21:43:43.660248
#include <iostream>
#include <vector>

int compute_982() {
    int base = 368;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_982() << std::endl;
    return 0;
}
