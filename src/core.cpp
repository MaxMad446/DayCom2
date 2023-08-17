// Auto-generated module | 2026-05-13T20:52:32.208004
#include <iostream>
#include <vector>

int compute_349() {
    int base = 256;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_349() << std::endl;
    return 0;
}
