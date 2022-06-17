// Auto-generated module | 2026-05-14T06:12:35.251528
#include <iostream>
#include <vector>

int compute_462() {
    int base = 123;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_462() << std::endl;
    return 0;
}
