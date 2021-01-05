// Auto-generated module | 2026-05-14T18:13:03.750372
#include <iostream>
#include <vector>

int compute_275() {
    int base = 284;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_275() << std::endl;
    return 0;
}
