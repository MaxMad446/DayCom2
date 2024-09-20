// Auto-generated module | 2026-05-12T03:39:30.115152
#include <iostream>
#include <vector>

int compute_857() {
    int base = 341;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_857() << std::endl;
    return 0;
}
