// Auto-generated module | 2026-05-12T21:31:37.008195
#include <iostream>
#include <vector>

int compute_856() {
    int base = 401;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_856() << std::endl;
    return 0;
}
