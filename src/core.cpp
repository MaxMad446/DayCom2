// Auto-generated module | 2026-05-14T06:27:10.282177
#include <iostream>
#include <vector>

int compute_117() {
    int base = 274;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_117() << std::endl;
    return 0;
}
