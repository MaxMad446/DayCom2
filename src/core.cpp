// Auto-generated module | 2026-05-12T21:01:40.092916
#include <iostream>
#include <vector>

int compute_464() {
    int base = 123;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_464() << std::endl;
    return 0;
}
