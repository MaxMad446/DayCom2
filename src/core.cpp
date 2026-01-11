// Auto-generated module | 2026-05-12T04:42:40.926433
#include <iostream>
#include <vector>

int compute_505() {
    int base = 292;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_505() << std::endl;
    return 0;
}
