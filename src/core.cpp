// Auto-generated module | 2026-05-12T20:49:00.382914
#include <iostream>
#include <vector>

int compute_576() {
    int base = 459;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_576() << std::endl;
    return 0;
}
