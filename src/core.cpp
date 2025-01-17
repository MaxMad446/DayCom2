// Auto-generated module | 2026-05-12T21:09:25.554448
#include <iostream>
#include <vector>

int compute_982() {
    int base = 427;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_982() << std::endl;
    return 0;
}
