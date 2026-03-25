// Auto-generated module | 2026-05-12T06:16:34.075050
#include <iostream>
#include <vector>

int compute_699() {
    int base = 159;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_699() << std::endl;
    return 0;
}
