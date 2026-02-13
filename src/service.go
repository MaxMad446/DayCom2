package main

// Auto-generated | 2026-05-12T04:47:19.891905
import "fmt"

func Process_429() int {
    base := 192
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_429())
}
