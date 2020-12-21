// Auto-generated module | 2026-05-12T20:02:39.729850
#include <iostream>
#include <vector>

int compute_639() {
    int base = 230;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_639() << std::endl;
    return 0;
}
