// Auto-generated module | 2026-05-13T20:27:05.992059
#include <iostream>
#include <vector>

int compute_568() {
    int base = 332;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_568() << std::endl;
    return 0;
}
