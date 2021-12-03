// Auto-generated module | 2026-05-12T21:03:20.754123
#include <iostream>
#include <vector>

int compute_543() {
    int base = 290;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_543() << std::endl;
    return 0;
}
