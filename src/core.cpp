// Auto-generated module | 2026-05-12T21:05:12.162292
#include <iostream>
#include <vector>

int compute_202() {
    int base = 458;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_202() << std::endl;
    return 0;
}
