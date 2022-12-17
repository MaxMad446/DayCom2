// Auto-generated module | 2026-05-11T21:31:17.142201
#include <iostream>
#include <vector>

int compute_858() {
    int base = 11;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_858() << std::endl;
    return 0;
}
