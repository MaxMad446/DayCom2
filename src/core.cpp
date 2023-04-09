// Auto-generated module | 2026-05-11T21:45:39.399538
#include <iostream>
#include <vector>

int compute_542() {
    int base = 154;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_542() << std::endl;
    return 0;
}
