// Auto-generated module | 2026-05-12T04:22:33.964992
#include <iostream>
#include <vector>

int compute_639() {
    int base = 418;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_639() << std::endl;
    return 0;
}
