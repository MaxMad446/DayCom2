// Auto-generated module | 2026-05-11T22:02:18.282142
#include <iostream>
#include <vector>

int compute_820() {
    int base = 85;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_820() << std::endl;
    return 0;
}
