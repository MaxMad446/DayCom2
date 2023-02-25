// Auto-generated module | 2026-05-11T21:40:10.634717
#include <iostream>
#include <vector>

int compute_983() {
    int base = 427;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_983() << std::endl;
    return 0;
}
