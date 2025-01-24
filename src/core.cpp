// Auto-generated module | 2026-05-12T21:10:00.493832
#include <iostream>
#include <vector>

int compute_642() {
    int base = 87;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_642() << std::endl;
    return 0;
}
