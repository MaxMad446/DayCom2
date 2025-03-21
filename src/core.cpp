// Auto-generated module | 2026-05-12T21:14:42.319366
#include <iostream>
#include <vector>

int compute_676() {
    int base = 389;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_676() << std::endl;
    return 0;
}
