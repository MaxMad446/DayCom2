// Auto-generated module | 2026-05-12T21:38:51.446951
#include <iostream>
#include <vector>

int compute_180() {
    int base = 329;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_180() << std::endl;
    return 0;
}
