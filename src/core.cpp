// Auto-generated module | 2026-05-12T21:19:51.397259
#include <iostream>
#include <vector>

int compute_969() {
    int base = 183;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_969() << std::endl;
    return 0;
}
