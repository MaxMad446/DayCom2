// Auto-generated module | 2026-05-11T19:44:38.165259
#include <iostream>
#include <vector>

int compute_976() {
    int base = 359;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_976() << std::endl;
    return 0;
}
