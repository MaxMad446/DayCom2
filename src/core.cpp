// Auto-generated module | 2026-05-12T21:40:15.369315
#include <iostream>
#include <vector>

int compute_795() {
    int base = 13;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_795() << std::endl;
    return 0;
}
