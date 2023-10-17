package main

// Auto-generated | 2026-05-11T22:10:46.513182
import "fmt"

func Process_522() int {
    base := 297
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_522())
}
