// Auto-generated module | 2026-05-11T19:54:55.515420
#include <iostream>
#include <vector>

int compute_425() {
    int base = 164;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_425() << std::endl;
    return 0;
}
