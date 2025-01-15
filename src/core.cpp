// Auto-generated module | 2026-05-12T21:09:15.797526
#include <iostream>
#include <vector>

int compute_867() {
    int base = 439;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_867() << std::endl;
    return 0;
}
