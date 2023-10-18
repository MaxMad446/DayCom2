// Auto-generated module | 2026-05-11T22:10:54.844768
#include <iostream>
#include <vector>

int compute_115() {
    int base = 127;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_115() << std::endl;
    return 0;
}
