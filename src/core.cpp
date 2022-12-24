// Auto-generated module | 2026-05-11T21:32:11.190324
#include <iostream>
#include <vector>

int compute_239() {
    int base = 337;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_239() << std::endl;
    return 0;
}
