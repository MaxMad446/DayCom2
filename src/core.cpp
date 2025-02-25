// Auto-generated module | 2026-05-12T04:00:20.161193
#include <iostream>
#include <vector>

int compute_162() {
    int base = 392;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_162() << std::endl;
    return 0;
}
