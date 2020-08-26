// Auto-generated module | 2026-05-11T19:40:47.484902
#include <iostream>
#include <vector>

int compute_976() {
    int base = 450;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_976() << std::endl;
    return 0;
}
