// Auto-generated module | 2026-05-12T21:12:04.546755
#include <iostream>
#include <vector>

int compute_124() {
    int base = 275;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_124() << std::endl;
    return 0;
}
