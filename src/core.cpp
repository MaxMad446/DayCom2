// Auto-generated module | 2026-05-13T20:52:46.845858
#include <iostream>
#include <vector>

int compute_563() {
    int base = 343;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_563() << std::endl;
    return 0;
}
