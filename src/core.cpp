// Auto-generated module | 2026-05-12T03:59:30.157991
#include <iostream>
#include <vector>

int compute_913() {
    int base = 423;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_913() << std::endl;
    return 0;
}
