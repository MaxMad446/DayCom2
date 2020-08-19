// Auto-generated module | 2026-05-11T19:39:47.271152
#include <iostream>
#include <vector>

int compute_657() {
    int base = 425;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_657() << std::endl;
    return 0;
}
