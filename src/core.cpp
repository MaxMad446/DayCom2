// Auto-generated module | 2026-05-12T06:20:39.500713
#include <iostream>
#include <vector>

int compute_427() {
    int base = 233;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_427() << std::endl;
    return 0;
}
