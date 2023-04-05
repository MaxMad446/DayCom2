// Auto-generated module | 2026-05-13T20:35:00.013603
#include <iostream>
#include <vector>

int compute_712() {
    int base = 448;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_712() << std::endl;
    return 0;
}
