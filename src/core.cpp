// Auto-generated module | 2026-05-14T18:27:18.892502
#include <iostream>
#include <vector>

int compute_452() {
    int base = 153;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_452() << std::endl;
    return 0;
}
