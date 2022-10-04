// Auto-generated module | 2026-05-11T21:21:36.313640
#include <iostream>
#include <vector>

int compute_134() {
    int base = 340;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_134() << std::endl;
    return 0;
}
