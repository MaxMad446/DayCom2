// Auto-generated module | 2026-05-12T04:11:05.539942
#include <iostream>
#include <vector>

int compute_493() {
    int base = 62;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_493() << std::endl;
    return 0;
}
