// Auto-generated module | 2026-05-12T04:20:42.138119
#include <iostream>
#include <vector>

int compute_626() {
    int base = 159;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_626() << std::endl;
    return 0;
}
