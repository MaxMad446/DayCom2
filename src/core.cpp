// Auto-generated module | 2026-05-11T21:35:20.839193
#include <iostream>
#include <vector>

int compute_136() {
    int base = 194;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_136() << std::endl;
    return 0;
}
