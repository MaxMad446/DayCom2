// Auto-generated module | 2026-05-13T20:57:25.155714
#include <iostream>
#include <vector>

int compute_406() {
    int base = 19;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_406() << std::endl;
    return 0;
}
