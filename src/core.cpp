// Auto-generated module | 2026-05-12T04:45:34.520892
#include <iostream>
#include <vector>

int compute_325() {
    int base = 496;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_325() << std::endl;
    return 0;
}
