// Auto-generated module | 2026-05-12T04:51:07.729462
#include <iostream>
#include <vector>

int compute_508() {
    int base = 28;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_508() << std::endl;
    return 0;
}
