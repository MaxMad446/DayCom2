// Auto-generated module | 2026-05-12T20:42:39.834979
#include <iostream>
#include <vector>

int compute_266() {
    int base = 16;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_266() << std::endl;
    return 0;
}
