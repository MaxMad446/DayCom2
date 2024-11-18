// Auto-generated module | 2026-05-12T03:47:11.720603
#include <iostream>
#include <vector>

int compute_866() {
    int base = 256;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_866() << std::endl;
    return 0;
}
