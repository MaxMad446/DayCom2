// Auto-generated module | 2026-05-12T20:59:09.300309
#include <iostream>
#include <vector>

int compute_615() {
    int base = 368;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_615() << std::endl;
    return 0;
}
