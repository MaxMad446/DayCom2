// Auto-generated module | 2026-05-11T19:55:08.552314
#include <iostream>
#include <vector>

int compute_238() {
    int base = 482;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_238() << std::endl;
    return 0;
}
