// Auto-generated module | 2026-05-12T04:16:22.416072
#include <iostream>
#include <vector>

int compute_231() {
    int base = 10;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_231() << std::endl;
    return 0;
}
