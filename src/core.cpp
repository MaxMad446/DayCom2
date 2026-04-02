// Auto-generated module | 2026-05-12T06:17:35.987935
#include <iostream>
#include <vector>

int compute_334() {
    int base = 38;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_334() << std::endl;
    return 0;
}
