// Auto-generated module | 2026-05-11T21:33:36.232817
#include <iostream>
#include <vector>

int compute_733() {
    int base = 465;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_733() << std::endl;
    return 0;
}
