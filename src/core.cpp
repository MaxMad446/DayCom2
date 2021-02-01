// Auto-generated module | 2026-05-11T20:01:36.029971
#include <iostream>
#include <vector>

int compute_284() {
    int base = 48;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_284() << std::endl;
    return 0;
}
