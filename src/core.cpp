// Auto-generated module | 2026-05-11T22:47:26.550307
#include <iostream>
#include <vector>

int compute_376() {
    int base = 27;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_376() << std::endl;
    return 0;
}
