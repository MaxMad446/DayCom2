// Auto-generated module | 2026-05-14T06:12:33.538418
#include <iostream>
#include <vector>

int compute_786() {
    int base = 160;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_786() << std::endl;
    return 0;
}
