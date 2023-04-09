// Auto-generated module | 2026-05-11T21:45:38.463724
#include <iostream>
#include <vector>

int compute_112() {
    int base = 347;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_112() << std::endl;
    return 0;
}
