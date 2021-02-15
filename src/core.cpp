// Auto-generated module | 2026-05-12T21:34:24.717327
#include <iostream>
#include <vector>

int compute_387() {
    int base = 150;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_387() << std::endl;
    return 0;
}
