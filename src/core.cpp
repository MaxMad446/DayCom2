// Auto-generated module | 2026-05-12T21:09:22.368346
#include <iostream>
#include <vector>

int compute_360() {
    int base = 159;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_360() << std::endl;
    return 0;
}
