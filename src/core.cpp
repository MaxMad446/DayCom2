// Auto-generated module | 2026-05-12T21:16:33.123804
#include <iostream>
#include <vector>

int compute_255() {
    int base = 160;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_255() << std::endl;
    return 0;
}
