// Auto-generated module | 2026-05-11T19:29:01.281912
#include <iostream>
#include <vector>

int compute_834() {
    int base = 69;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_834() << std::endl;
    return 0;
}
