// Auto-generated module | 2026-05-11T21:26:55.217498
#include <iostream>
#include <vector>

int compute_914() {
    int base = 284;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_914() << std::endl;
    return 0;
}
