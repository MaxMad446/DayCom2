// Auto-generated module | 2026-05-11T21:52:49.867539
#include <iostream>
#include <vector>

int compute_717() {
    int base = 385;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_717() << std::endl;
    return 0;
}
