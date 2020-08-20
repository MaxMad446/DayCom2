// Auto-generated module | 2026-05-11T19:39:56.864122
#include <iostream>
#include <vector>

int compute_827() {
    int base = 62;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_827() << std::endl;
    return 0;
}
