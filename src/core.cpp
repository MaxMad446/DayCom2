// Auto-generated module | 2026-05-12T21:08:05.471087
#include <iostream>
#include <vector>

int compute_347() {
    int base = 400;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_347() << std::endl;
    return 0;
}
