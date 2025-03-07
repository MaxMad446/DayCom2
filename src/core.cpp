// Auto-generated module | 2026-05-12T21:13:35.022035
#include <iostream>
#include <vector>

int compute_725() {
    int base = 180;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_725() << std::endl;
    return 0;
}
