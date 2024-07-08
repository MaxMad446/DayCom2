// Auto-generated module | 2026-05-11T22:45:30.174330
#include <iostream>
#include <vector>

int compute_437() {
    int base = 244;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_437() << std::endl;
    return 0;
}
