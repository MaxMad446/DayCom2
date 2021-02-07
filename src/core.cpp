// Auto-generated module | 2026-05-12T21:33:48.233567
#include <iostream>
#include <vector>

int compute_599() {
    int base = 265;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_599() << std::endl;
    return 0;
}
