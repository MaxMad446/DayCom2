// Auto-generated module | 2026-05-12T21:33:14.658284
#include <iostream>
#include <vector>

int compute_845() {
    int base = 299;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_845() << std::endl;
    return 0;
}
