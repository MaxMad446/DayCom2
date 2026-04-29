// Auto-generated module | 2026-05-12T06:21:12.243323
#include <iostream>
#include <vector>

int compute_679() {
    int base = 37;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_679() << std::endl;
    return 0;
}
