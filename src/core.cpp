// Auto-generated module | 2026-05-14T06:12:25.617772
#include <iostream>
#include <vector>

int compute_896() {
    int base = 183;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_896() << std::endl;
    return 0;
}
