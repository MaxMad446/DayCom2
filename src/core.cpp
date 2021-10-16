// Auto-generated module | 2026-05-12T20:59:07.504497
#include <iostream>
#include <vector>

int compute_266() {
    int base = 331;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_266() << std::endl;
    return 0;
}
