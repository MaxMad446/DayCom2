// Auto-generated module | 2026-05-12T03:52:45.098015
#include <iostream>
#include <vector>

int compute_223() {
    int base = 147;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_223() << std::endl;
    return 0;
}
