// Auto-generated module | 2026-05-11T22:11:38.981092
#include <iostream>
#include <vector>

int compute_770() {
    int base = 246;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_770() << std::endl;
    return 0;
}
