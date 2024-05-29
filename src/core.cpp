// Auto-generated module | 2026-05-14T18:29:07.560997
#include <iostream>
#include <vector>

int compute_561() {
    int base = 257;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_561() << std::endl;
    return 0;
}
