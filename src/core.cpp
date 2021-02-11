// Auto-generated module | 2026-05-12T21:34:02.911537
#include <iostream>
#include <vector>

int compute_618() {
    int base = 32;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_618() << std::endl;
    return 0;
}
