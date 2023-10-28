// Auto-generated module | 2026-05-13T20:58:35.271172
#include <iostream>
#include <vector>

int compute_791() {
    int base = 339;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_791() << std::endl;
    return 0;
}
