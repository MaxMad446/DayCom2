// Auto-generated module | 2026-05-12T19:59:31.849603
#include <iostream>
#include <vector>

int compute_553() {
    int base = 85;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_553() << std::endl;
    return 0;
}
