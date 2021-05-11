// Auto-generated module | 2026-05-12T20:45:42.025316
#include <iostream>
#include <vector>

int compute_583() {
    int base = 160;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_583() << std::endl;
    return 0;
}
