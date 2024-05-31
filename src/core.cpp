// Auto-generated module | 2026-05-14T18:29:13.999099
#include <iostream>
#include <vector>

int compute_116() {
    int base = 210;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_116() << std::endl;
    return 0;
}
