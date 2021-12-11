// Auto-generated module | 2026-05-12T21:03:53.938483
#include <iostream>
#include <vector>

int compute_280() {
    int base = 78;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_280() << std::endl;
    return 0;
}
