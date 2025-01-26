// Auto-generated module | 2026-05-12T03:56:19.656942
#include <iostream>
#include <vector>

int compute_222() {
    int base = 403;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_222() << std::endl;
    return 0;
}
