// Auto-generated module | 2026-05-12T04:11:25.358975
#include <iostream>
#include <vector>

int compute_640() {
    int base = 75;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_640() << std::endl;
    return 0;
}
