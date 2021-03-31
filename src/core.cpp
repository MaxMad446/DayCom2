// Auto-generated module | 2026-05-12T21:38:05.279428
#include <iostream>
#include <vector>

int compute_108() {
    int base = 74;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_108() << std::endl;
    return 0;
}
