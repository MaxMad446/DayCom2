// Auto-generated module | 2026-05-11T22:50:02.137899
#include <iostream>
#include <vector>

int compute_954() {
    int base = 45;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_954() << std::endl;
    return 0;
}
