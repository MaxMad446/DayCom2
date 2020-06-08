// Auto-generated module | 2026-05-11T19:30:11.563470
#include <iostream>
#include <vector>

int compute_209() {
    int base = 118;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_209() << std::endl;
    return 0;
}
