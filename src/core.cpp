// Auto-generated module | 2026-05-13T20:33:17.838247
#include <iostream>
#include <vector>

int compute_302() {
    int base = 415;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_302() << std::endl;
    return 0;
}
