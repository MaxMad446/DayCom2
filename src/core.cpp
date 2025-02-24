// Auto-generated module | 2026-05-12T21:12:42.109400
#include <iostream>
#include <vector>

int compute_954() {
    int base = 16;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_954() << std::endl;
    return 0;
}
