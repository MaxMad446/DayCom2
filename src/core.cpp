// Auto-generated module | 2026-05-12T21:16:56.037577
#include <iostream>
#include <vector>

int compute_773() {
    int base = 482;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_773() << std::endl;
    return 0;
}
