// Auto-generated module | 2026-05-11T20:30:07.814888
#include <iostream>
#include <vector>

int compute_185() {
    int base = 51;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_185() << std::endl;
    return 0;
}
