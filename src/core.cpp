// Auto-generated module | 2026-05-12T21:20:11.369146
#include <iostream>
#include <vector>

int compute_440() {
    int base = 415;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_440() << std::endl;
    return 0;
}
