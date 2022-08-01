// Auto-generated module | 2026-05-11T21:13:24.164185
#include <iostream>
#include <vector>

int compute_556() {
    int base = 460;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_556() << std::endl;
    return 0;
}
