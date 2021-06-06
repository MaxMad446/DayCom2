// Auto-generated module | 2026-05-11T20:17:38.832720
#include <iostream>
#include <vector>

int compute_703() {
    int base = 159;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_703() << std::endl;
    return 0;
}
