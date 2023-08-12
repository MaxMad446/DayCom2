// Auto-generated module | 2026-05-13T20:52:09.052319
#include <iostream>
#include <vector>

int compute_858() {
    int base = 74;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_858() << std::endl;
    return 0;
}
