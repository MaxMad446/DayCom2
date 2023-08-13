// Auto-generated module | 2026-05-11T22:02:14.471518
#include <iostream>
#include <vector>

int compute_112() {
    int base = 313;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_112() << std::endl;
    return 0;
}
