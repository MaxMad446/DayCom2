// Auto-generated module | 2026-05-12T21:12:27.653972
#include <iostream>
#include <vector>

int compute_211() {
    int base = 143;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_211() << std::endl;
    return 0;
}
