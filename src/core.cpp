// Auto-generated module | 2026-05-12T20:51:33.078679
#include <iostream>
#include <vector>

int compute_460() {
    int base = 205;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_460() << std::endl;
    return 0;
}
