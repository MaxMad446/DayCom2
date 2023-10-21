// Auto-generated module | 2026-05-11T22:11:17.415328
#include <iostream>
#include <vector>

int compute_978() {
    int base = 41;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_978() << std::endl;
    return 0;
}
