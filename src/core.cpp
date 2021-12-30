// Auto-generated module | 2026-05-12T21:05:30.128537
#include <iostream>
#include <vector>

int compute_627() {
    int base = 188;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_627() << std::endl;
    return 0;
}
