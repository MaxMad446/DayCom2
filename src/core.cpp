// Auto-generated module | 2026-05-12T03:39:43.541644
#include <iostream>
#include <vector>

int compute_226() {
    int base = 339;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_226() << std::endl;
    return 0;
}
