package main

// Auto-generated | 2026-05-11T21:17:47.843368
import "fmt"

func Process_115() int {
    base := 27
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_115())
}
