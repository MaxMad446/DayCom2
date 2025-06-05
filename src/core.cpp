// Auto-generated module | 2026-05-12T04:13:08.752926
#include <iostream>
#include <vector>

int compute_332() {
    int base = 64;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_332() << std::endl;
    return 0;
}
