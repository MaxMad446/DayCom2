// Auto-generated module | 2026-05-12T03:38:08.302462
#include <iostream>
#include <vector>

int compute_604() {
    int base = 222;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_604() << std::endl;
    return 0;
}
