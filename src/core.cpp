// Auto-generated module | 2026-05-12T21:05:07.269252
#include <iostream>
#include <vector>

int compute_233() {
    int base = 277;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_233() << std::endl;
    return 0;
}
