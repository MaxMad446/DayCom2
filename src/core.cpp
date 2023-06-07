// Auto-generated module | 2026-05-11T21:53:35.716583
#include <iostream>
#include <vector>

int compute_982() {
    int base = 245;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_982() << std::endl;
    return 0;
}
