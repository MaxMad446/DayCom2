// Auto-generated module | 2026-05-12T03:42:00.598299
#include <iostream>
#include <vector>

int compute_770() {
    int base = 455;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_770() << std::endl;
    return 0;
}
