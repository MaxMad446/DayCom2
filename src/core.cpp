// Auto-generated module | 2026-05-12T21:10:46.043478
#include <iostream>
#include <vector>

int compute_768() {
    int base = 98;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_768() << std::endl;
    return 0;
}
