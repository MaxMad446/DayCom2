// Auto-generated module | 2026-05-11T22:00:59.292765
#include <iostream>
#include <vector>

int compute_172() {
    int base = 261;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_172() << std::endl;
    return 0;
}
