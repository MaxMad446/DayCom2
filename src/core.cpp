// Auto-generated module | 2026-05-12T21:34:49.257500
#include <iostream>
#include <vector>

int compute_656() {
    int base = 317;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_656() << std::endl;
    return 0;
}
