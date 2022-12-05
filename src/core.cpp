// Auto-generated module | 2026-05-14T06:26:31.403168
#include <iostream>
#include <vector>

int compute_983() {
    int base = 88;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_983() << std::endl;
    return 0;
}
