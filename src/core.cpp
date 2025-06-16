// Auto-generated module | 2026-05-12T21:22:07.329665
#include <iostream>
#include <vector>

int compute_571() {
    int base = 347;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_571() << std::endl;
    return 0;
}
