// Auto-generated module | 2026-05-12T21:38:00.871316
#include <iostream>
#include <vector>

int compute_857() {
    int base = 483;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_857() << std::endl;
    return 0;
}
