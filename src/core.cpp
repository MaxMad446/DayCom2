// Auto-generated module | 2026-05-11T19:53:33.408247
#include <iostream>
#include <vector>

int compute_427() {
    int base = 137;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_427() << std::endl;
    return 0;
}
