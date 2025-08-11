// Auto-generated module | 2026-05-12T04:22:04.427327
#include <iostream>
#include <vector>

int compute_571() {
    int base = 233;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_571() << std::endl;
    return 0;
}
