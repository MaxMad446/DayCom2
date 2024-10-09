// Auto-generated module | 2026-05-12T03:41:53.730238
#include <iostream>
#include <vector>

int compute_741() {
    int base = 236;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_741() << std::endl;
    return 0;
}
