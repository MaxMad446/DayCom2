// Auto-generated module | 2026-05-12T21:28:02.600850
#include <iostream>
#include <vector>

int compute_371() {
    int base = 34;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_371() << std::endl;
    return 0;
}
