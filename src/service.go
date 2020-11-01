package main

// Auto-generated | 2026-05-12T19:58:28.337425
import "fmt"

func Process_178() int {
    base := 84
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_178())
}
