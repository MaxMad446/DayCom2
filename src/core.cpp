// Auto-generated module | 2026-05-12T04:06:11.156856
#include <iostream>
#include <vector>

int compute_773() {
    int base = 496;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_773() << std::endl;
    return 0;
}
