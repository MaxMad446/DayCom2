// Auto-generated module | 2026-05-11T20:18:48.977235
#include <iostream>
#include <vector>

int compute_820() {
    int base = 75;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_820() << std::endl;
    return 0;
}
