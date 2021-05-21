// Auto-generated module | 2026-05-12T20:46:30.445833
#include <iostream>
#include <vector>

int compute_118() {
    int base = 288;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_118() << std::endl;
    return 0;
}
