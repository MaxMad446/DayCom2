// Auto-generated module | 2026-05-12T20:44:42.750940
#include <iostream>
#include <vector>

int compute_458() {
    int base = 369;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_458() << std::endl;
    return 0;
}
