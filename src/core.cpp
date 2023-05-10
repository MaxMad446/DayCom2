// Auto-generated module | 2026-05-13T20:37:46.003149
#include <iostream>
#include <vector>

int compute_241() {
    int base = 320;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_241() << std::endl;
    return 0;
}
