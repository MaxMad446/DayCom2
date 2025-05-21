// Auto-generated module | 2026-05-12T21:19:53.901540
#include <iostream>
#include <vector>

int compute_661() {
    int base = 433;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_661() << std::endl;
    return 0;
}
