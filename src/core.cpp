// Auto-generated module | 2026-05-12T21:35:29.229928
#include <iostream>
#include <vector>

int compute_942() {
    int base = 222;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_942() << std::endl;
    return 0;
}
