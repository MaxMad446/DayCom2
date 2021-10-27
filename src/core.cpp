// Auto-generated module | 2026-05-12T21:00:11.492027
#include <iostream>
#include <vector>

int compute_500() {
    int base = 430;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_500() << std::endl;
    return 0;
}
