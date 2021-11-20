// Auto-generated module | 2026-05-12T21:02:09.426474
#include <iostream>
#include <vector>

int compute_503() {
    int base = 301;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_503() << std::endl;
    return 0;
}
