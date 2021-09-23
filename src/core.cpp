// Auto-generated module | 2026-05-12T20:57:17.161959
#include <iostream>
#include <vector>

int compute_910() {
    int base = 74;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_910() << std::endl;
    return 0;
}
