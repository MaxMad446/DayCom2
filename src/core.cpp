// Auto-generated module | 2026-05-12T06:16:28.136867
#include <iostream>
#include <vector>

int compute_435() {
    int base = 251;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_435() << std::endl;
    return 0;
}
