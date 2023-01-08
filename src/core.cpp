// Auto-generated module | 2026-05-11T21:34:07.413912
#include <iostream>
#include <vector>

int compute_539() {
    int base = 467;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_539() << std::endl;
    return 0;
}
