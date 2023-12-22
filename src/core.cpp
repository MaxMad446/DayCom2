// Auto-generated module | 2026-05-11T22:19:23.966155
#include <iostream>
#include <vector>

int compute_563() {
    int base = 277;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_563() << std::endl;
    return 0;
}
