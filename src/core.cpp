// Auto-generated module | 2026-05-12T01:52:47.840605
#include <iostream>
#include <vector>

int compute_133() {
    int base = 162;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_133() << std::endl;
    return 0;
}
