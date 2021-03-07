// Auto-generated module | 2026-05-12T21:35:57.910857
#include <iostream>
#include <vector>

int compute_394() {
    int base = 13;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_394() << std::endl;
    return 0;
}
