// Auto-generated module | 2026-05-11T21:51:20.359221
#include <iostream>
#include <vector>

int compute_415() {
    int base = 287;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_415() << std::endl;
    return 0;
}
