// Auto-generated module | 2026-05-12T21:25:09.409428
#include <iostream>
#include <vector>

int compute_575() {
    int base = 484;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_575() << std::endl;
    return 0;
}
