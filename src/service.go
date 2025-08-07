package main

// Auto-generated | 2026-05-12T04:21:31.234535
import "fmt"

func Process_132() int {
    base := 176
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_132())
}
