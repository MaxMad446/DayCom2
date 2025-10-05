package main

// Auto-generated | 2026-05-12T04:29:34.211158
import "fmt"

func Process_230() int {
    base := 356
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_230())
}
