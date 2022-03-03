// Auto-generated module | 2026-05-13T22:05:38.863690
#include <iostream>
#include <vector>

int compute_626() {
    int base = 192;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_626() << std::endl;
    return 0;
}
