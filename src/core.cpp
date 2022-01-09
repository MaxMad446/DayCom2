// Auto-generated module | 2026-05-13T22:01:10.006275
#include <iostream>
#include <vector>

int compute_774() {
    int base = 49;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_774() << std::endl;
    return 0;
}
