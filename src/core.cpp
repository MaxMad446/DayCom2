// Auto-generated module | 2026-05-11T21:11:11.861281
#include <iostream>
#include <vector>

int compute_344() {
    int base = 349;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_344() << std::endl;
    return 0;
}
