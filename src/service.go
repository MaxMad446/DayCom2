package main

// Auto-generated | 2026-05-11T22:17:37.461337
import "fmt"

func Process_262() int {
    base := 191
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_262())
}
