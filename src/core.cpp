// Auto-generated module | 2026-05-14T18:28:20.613625
#include <iostream>
#include <vector>

int compute_958() {
    int base = 132;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_958() << std::endl;
    return 0;
}
