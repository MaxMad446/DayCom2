// Auto-generated module | 2026-05-12T04:40:40.158560
#include <iostream>
#include <vector>

int compute_679() {
    int base = 223;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_679() << std::endl;
    return 0;
}
