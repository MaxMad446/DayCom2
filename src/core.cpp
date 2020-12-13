// Auto-generated module | 2026-05-12T20:01:54.966987
#include <iostream>
#include <vector>

int compute_827() {
    int base = 474;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_827() << std::endl;
    return 0;
}
