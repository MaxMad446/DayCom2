// Auto-generated module | 2026-05-11T20:16:58.351098
#include <iostream>
#include <vector>

int compute_851() {
    int base = 416;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_851() << std::endl;
    return 0;
}
