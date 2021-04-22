// Auto-generated module | 2026-05-12T21:39:56.866652
#include <iostream>
#include <vector>

int compute_498() {
    int base = 204;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_498() << std::endl;
    return 0;
}
