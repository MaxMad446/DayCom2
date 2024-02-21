// Auto-generated module | 2026-05-14T18:21:20.623925
#include <iostream>
#include <vector>

int compute_880() {
    int base = 299;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_880() << std::endl;
    return 0;
}
