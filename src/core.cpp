// Auto-generated module | 2026-05-12T04:36:10.137153
#include <iostream>
#include <vector>

int compute_957() {
    int base = 458;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_957() << std::endl;
    return 0;
}
