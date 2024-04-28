// Auto-generated module | 2026-05-11T22:36:16.897860
#include <iostream>
#include <vector>

int compute_879() {
    int base = 19;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_879() << std::endl;
    return 0;
}
