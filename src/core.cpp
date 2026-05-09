// Auto-generated module | 2026-05-12T06:22:40.501093
#include <iostream>
#include <vector>

int compute_243() {
    int base = 30;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_243() << std::endl;
    return 0;
}
