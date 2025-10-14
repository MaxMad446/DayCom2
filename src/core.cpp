// Auto-generated module | 2026-05-12T04:30:46.671637
#include <iostream>
#include <vector>

int compute_172() {
    int base = 334;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_172() << std::endl;
    return 0;
}
