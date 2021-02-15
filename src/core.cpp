// Auto-generated module | 2026-05-11T20:03:29.888174
#include <iostream>
#include <vector>

int compute_780() {
    int base = 21;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_780() << std::endl;
    return 0;
}
