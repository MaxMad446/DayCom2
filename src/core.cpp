// Auto-generated module | 2026-05-12T21:11:46.293233
#include <iostream>
#include <vector>

int compute_174() {
    int base = 314;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_174() << std::endl;
    return 0;
}
