// Auto-generated module | 2026-05-12T21:15:12.252416
#include <iostream>
#include <vector>

int compute_979() {
    int base = 188;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_979() << std::endl;
    return 0;
}
