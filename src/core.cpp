// Auto-generated module | 2026-05-11T22:46:46.464001
#include <iostream>
#include <vector>

int compute_471() {
    int base = 62;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_471() << std::endl;
    return 0;
}
