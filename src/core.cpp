// Auto-generated module | 2026-05-12T04:32:56.449785
#include <iostream>
#include <vector>

int compute_993() {
    int base = 394;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_993() << std::endl;
    return 0;
}
