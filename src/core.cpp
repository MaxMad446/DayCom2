// Auto-generated module | 2026-05-14T18:02:51.806212
#include <iostream>
#include <vector>

int compute_757() {
    int base = 333;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_757() << std::endl;
    return 0;
}
