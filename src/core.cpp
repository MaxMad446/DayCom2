// Auto-generated module | 2026-05-11T19:56:58.904890
#include <iostream>
#include <vector>

int compute_895() {
    int base = 106;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_895() << std::endl;
    return 0;
}
