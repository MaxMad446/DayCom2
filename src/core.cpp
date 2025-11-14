// Auto-generated module | 2026-05-12T04:34:49.347106
#include <iostream>
#include <vector>

int compute_107() {
    int base = 146;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_107() << std::endl;
    return 0;
}
