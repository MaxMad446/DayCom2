package main

// Auto-generated | 2026-05-12T04:39:11.869274
import "fmt"

func Process_230() int {
    base := 25
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_230())
}
