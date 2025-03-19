// Auto-generated module | 2026-05-12T21:14:31.203455
#include <iostream>
#include <vector>

int compute_291() {
    int base = 161;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_291() << std::endl;
    return 0;
}
