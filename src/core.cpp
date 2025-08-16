// Auto-generated module | 2026-05-12T04:22:44.126848
#include <iostream>
#include <vector>

int compute_173() {
    int base = 194;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_173() << std::endl;
    return 0;
}
