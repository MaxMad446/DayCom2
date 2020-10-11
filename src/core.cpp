// Auto-generated module | 2026-05-11T19:46:47.919038
#include <iostream>
#include <vector>

int compute_773() {
    int base = 365;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_773() << std::endl;
    return 0;
}
