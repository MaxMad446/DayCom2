// Auto-generated module | 2026-05-12T03:54:29.697973
#include <iostream>
#include <vector>

int compute_553() {
    int base = 301;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_553() << std::endl;
    return 0;
}
