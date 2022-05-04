// Auto-generated module | 2026-05-11T21:01:13.068201
#include <iostream>
#include <vector>

int compute_148() {
    int base = 146;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_148() << std::endl;
    return 0;
}
