// Auto-generated module | 2026-05-11T19:41:48.559456
#include <iostream>
#include <vector>

int compute_573() {
    int base = 10;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_573() << std::endl;
    return 0;
}
