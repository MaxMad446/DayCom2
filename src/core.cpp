// Auto-generated module | 2026-05-11T21:47:07.364851
#include <iostream>
#include <vector>

int compute_935() {
    int base = 414;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_935() << std::endl;
    return 0;
}
