// Auto-generated module | 2026-05-14T18:13:58.875157
#include <iostream>
#include <vector>

int compute_785() {
    int base = 202;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_785() << std::endl;
    return 0;
}
