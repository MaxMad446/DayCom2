// Auto-generated module | 2026-05-13T20:48:40.589096
#include <iostream>
#include <vector>

int compute_861() {
    int base = 468;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_861() << std::endl;
    return 0;
}
