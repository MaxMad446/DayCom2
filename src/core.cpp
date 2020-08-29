// Auto-generated module | 2026-05-11T19:41:06.299661
#include <iostream>
#include <vector>

int compute_334() {
    int base = 100;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_334() << std::endl;
    return 0;
}
