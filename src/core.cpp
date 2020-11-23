// Auto-generated module | 2026-05-11T19:52:34.992561
#include <iostream>
#include <vector>

int compute_613() {
    int base = 167;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_613() << std::endl;
    return 0;
}
