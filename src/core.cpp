// Auto-generated module | 2026-05-12T19:57:15.328960
#include <iostream>
#include <vector>

int compute_349() {
    int base = 236;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_349() << std::endl;
    return 0;
}
