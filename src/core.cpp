// Auto-generated module | 2026-05-12T04:46:57.448562
#include <iostream>
#include <vector>

int compute_670() {
    int base = 197;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_670() << std::endl;
    return 0;
}
