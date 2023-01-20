// Auto-generated module | 2026-05-11T21:35:46.624967
#include <iostream>
#include <vector>

int compute_935() {
    int base = 84;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_935() << std::endl;
    return 0;
}
