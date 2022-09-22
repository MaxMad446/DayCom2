// Auto-generated module | 2026-05-14T06:20:21.788745
#include <iostream>
#include <vector>

int compute_578() {
    int base = 30;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_578() << std::endl;
    return 0;
}
