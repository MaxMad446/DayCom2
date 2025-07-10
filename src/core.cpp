// Auto-generated module | 2026-05-12T21:24:18.207281
#include <iostream>
#include <vector>

int compute_742() {
    int base = 414;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_742() << std::endl;
    return 0;
}
