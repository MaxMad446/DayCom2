// Auto-generated module | 2026-05-12T20:00:07.289383
#include <iostream>
#include <vector>

int compute_442() {
    int base = 273;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_442() << std::endl;
    return 0;
}
