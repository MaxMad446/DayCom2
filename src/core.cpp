// Auto-generated module | 2026-05-12T20:35:17.292383
#include <iostream>
#include <vector>

int compute_911() {
    int base = 325;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_911() << std::endl;
    return 0;
}
