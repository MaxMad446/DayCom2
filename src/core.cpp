// Auto-generated module | 2026-05-12T04:10:40.888912
#include <iostream>
#include <vector>

int compute_643() {
    int base = 300;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_643() << std::endl;
    return 0;
}
