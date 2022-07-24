// Auto-generated module | 2026-05-11T21:12:18.975302
#include <iostream>
#include <vector>

int compute_742() {
    int base = 195;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_742() << std::endl;
    return 0;
}
