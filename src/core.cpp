// Auto-generated module | 2026-05-11T19:32:56.286535
#include <iostream>
#include <vector>

int compute_986() {
    int base = 250;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_986() << std::endl;
    return 0;
}
