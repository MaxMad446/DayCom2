// Auto-generated module | 2026-05-12T03:38:34.786107
#include <iostream>
#include <vector>

int compute_122() {
    int base = 163;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_122() << std::endl;
    return 0;
}
