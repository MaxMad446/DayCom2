// Auto-generated module | 2026-05-14T06:21:19.516505
#include <iostream>
#include <vector>

int compute_901() {
    int base = 482;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_901() << std::endl;
    return 0;
}
