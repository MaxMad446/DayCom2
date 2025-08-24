// Auto-generated module | 2026-05-12T21:28:14.520282
#include <iostream>
#include <vector>

int compute_646() {
    int base = 478;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_646() << std::endl;
    return 0;
}
