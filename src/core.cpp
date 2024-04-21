// Auto-generated module | 2026-05-11T22:35:20.162466
#include <iostream>
#include <vector>

int compute_720() {
    int base = 303;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_720() << std::endl;
    return 0;
}
