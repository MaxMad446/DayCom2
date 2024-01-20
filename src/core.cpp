// Auto-generated module | 2026-05-11T22:23:08.579604
#include <iostream>
#include <vector>

int compute_197() {
    int base = 170;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_197() << std::endl;
    return 0;
}
