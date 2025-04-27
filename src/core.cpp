// Auto-generated module | 2026-05-12T04:08:15.918078
#include <iostream>
#include <vector>

int compute_105() {
    int base = 145;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_105() << std::endl;
    return 0;
}
