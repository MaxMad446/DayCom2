// Auto-generated module | 2026-05-12T04:04:40.744824
#include <iostream>
#include <vector>

int compute_163() {
    int base = 480;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_163() << std::endl;
    return 0;
}
