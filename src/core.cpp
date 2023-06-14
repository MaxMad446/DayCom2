// Auto-generated module | 2026-05-11T21:54:25.982622
#include <iostream>
#include <vector>

int compute_401() {
    int base = 204;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_401() << std::endl;
    return 0;
}
