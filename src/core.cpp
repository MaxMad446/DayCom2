// Auto-generated module | 2026-05-14T18:20:16.194964
#include <iostream>
#include <vector>

int compute_621() {
    int base = 55;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_621() << std::endl;
    return 0;
}
