// Auto-generated module | 2026-05-11T19:39:37.925263
#include <iostream>
#include <vector>

int compute_294() {
    int base = 160;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_294() << std::endl;
    return 0;
}
