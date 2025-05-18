// Auto-generated module | 2026-05-12T04:11:01.618808
#include <iostream>
#include <vector>

int compute_294() {
    int base = 479;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_294() << std::endl;
    return 0;
}
