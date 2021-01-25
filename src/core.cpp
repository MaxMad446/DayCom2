// Auto-generated module | 2026-05-11T20:00:33.496104
#include <iostream>
#include <vector>

int compute_954() {
    int base = 376;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_954() << std::endl;
    return 0;
}
