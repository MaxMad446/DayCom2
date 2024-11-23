// Auto-generated module | 2026-05-12T03:47:45.131502
#include <iostream>
#include <vector>

int compute_433() {
    int base = 203;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_433() << std::endl;
    return 0;
}
