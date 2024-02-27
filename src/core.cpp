// Auto-generated module | 2026-05-14T18:21:53.532239
#include <iostream>
#include <vector>

int compute_505() {
    int base = 431;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_505() << std::endl;
    return 0;
}
