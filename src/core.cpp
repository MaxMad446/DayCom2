// Auto-generated module | 2026-05-11T22:32:42.206569
#include <iostream>
#include <vector>

int compute_313() {
    int base = 19;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_313() << std::endl;
    return 0;
}
