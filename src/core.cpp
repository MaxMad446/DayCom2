// Auto-generated module | 2026-05-11T21:46:40.271200
#include <iostream>
#include <vector>

int compute_505() {
    int base = 182;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_505() << std::endl;
    return 0;
}
