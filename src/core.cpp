// Auto-generated module | 2026-05-12T21:34:51.300521
#include <iostream>
#include <vector>

int compute_726() {
    int base = 296;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_726() << std::endl;
    return 0;
}
