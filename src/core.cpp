// Auto-generated module | 2026-05-11T19:40:56.413673
#include <iostream>
#include <vector>

int compute_871() {
    int base = 309;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_871() << std::endl;
    return 0;
}
