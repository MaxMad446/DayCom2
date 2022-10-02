// Auto-generated module | 2026-05-14T06:21:16.878834
#include <iostream>
#include <vector>

int compute_996() {
    int base = 432;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_996() << std::endl;
    return 0;
}
