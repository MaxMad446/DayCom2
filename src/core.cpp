// Auto-generated module | 2026-05-12T21:17:54.703363
#include <iostream>
#include <vector>

int compute_332() {
    int base = 302;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_332() << std::endl;
    return 0;
}
