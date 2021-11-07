// Auto-generated module | 2026-05-12T21:00:59.646047
#include <iostream>
#include <vector>

int compute_360() {
    int base = 371;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_360() << std::endl;
    return 0;
}
