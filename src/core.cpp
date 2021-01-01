// Auto-generated module | 2026-05-12T21:30:46.325790
#include <iostream>
#include <vector>

int compute_237() {
    int base = 445;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_237() << std::endl;
    return 0;
}
