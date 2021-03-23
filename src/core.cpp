// Auto-generated module | 2026-05-12T21:37:13.533712
#include <iostream>
#include <vector>

int compute_173() {
    int base = 193;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_173() << std::endl;
    return 0;
}
