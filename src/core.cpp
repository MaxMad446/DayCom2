// Auto-generated module | 2026-05-12T04:15:56.496606
#include <iostream>
#include <vector>

int compute_181() {
    int base = 152;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_181() << std::endl;
    return 0;
}
