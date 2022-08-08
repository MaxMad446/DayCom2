// Auto-generated module | 2026-05-14T06:16:39.630836
#include <iostream>
#include <vector>

int compute_937() {
    int base = 337;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_937() << std::endl;
    return 0;
}
