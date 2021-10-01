// Auto-generated module | 2026-05-11T20:32:58.826953
#include <iostream>
#include <vector>

int compute_598() {
    int base = 112;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_598() << std::endl;
    return 0;
}
