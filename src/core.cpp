// Auto-generated module | 2026-05-14T18:09:35.618987
#include <iostream>
#include <vector>

int compute_521() {
    int base = 303;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_521() << std::endl;
    return 0;
}
