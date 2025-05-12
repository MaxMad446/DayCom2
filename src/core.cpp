// Auto-generated module | 2026-05-12T21:19:02.253033
#include <iostream>
#include <vector>

int compute_270() {
    int base = 52;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_270() << std::endl;
    return 0;
}
