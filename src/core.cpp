// Auto-generated module | 2026-05-11T21:31:01.577272
#include <iostream>
#include <vector>

int compute_200() {
    int base = 185;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_200() << std::endl;
    return 0;
}
