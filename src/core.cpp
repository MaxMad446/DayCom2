// Auto-generated module | 2026-05-12T21:33:55.670046
#include <iostream>
#include <vector>

int compute_561() {
    int base = 331;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_561() << std::endl;
    return 0;
}
