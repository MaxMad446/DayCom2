// Auto-generated module | 2026-05-13T21:01:19.281498
#include <iostream>
#include <vector>

int compute_539() {
    int base = 69;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_539() << std::endl;
    return 0;
}
