// Auto-generated module | 2026-05-11T22:33:32.237958
#include <iostream>
#include <vector>

int compute_769() {
    int base = 459;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_769() << std::endl;
    return 0;
}
