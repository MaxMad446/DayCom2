// Auto-generated module | 2026-05-11T22:38:32.240325
#include <iostream>
#include <vector>

int compute_651() {
    int base = 150;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_651() << std::endl;
    return 0;
}
