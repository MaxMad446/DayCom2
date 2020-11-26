// Auto-generated module | 2026-05-12T20:00:28.804821
#include <iostream>
#include <vector>

int compute_255() {
    int base = 419;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_255() << std::endl;
    return 0;
}
