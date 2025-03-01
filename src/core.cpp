// Auto-generated module | 2026-05-12T04:00:56.276666
#include <iostream>
#include <vector>

int compute_689() {
    int base = 198;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_689() << std::endl;
    return 0;
}
