// Auto-generated module | 2026-05-12T21:00:37.518859
#include <iostream>
#include <vector>

int compute_512() {
    int base = 150;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_512() << std::endl;
    return 0;
}
