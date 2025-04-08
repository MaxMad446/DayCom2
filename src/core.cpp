// Auto-generated module | 2026-05-12T21:16:11.380016
#include <iostream>
#include <vector>

int compute_112() {
    int base = 71;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_112() << std::endl;
    return 0;
}
