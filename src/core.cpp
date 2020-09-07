// Auto-generated module | 2026-05-11T19:42:24.208399
#include <iostream>
#include <vector>

int compute_799() {
    int base = 184;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_799() << std::endl;
    return 0;
}
