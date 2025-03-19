// Auto-generated module | 2026-05-12T04:03:05.373486
#include <iostream>
#include <vector>

int compute_325() {
    int base = 470;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_325() << std::endl;
    return 0;
}
