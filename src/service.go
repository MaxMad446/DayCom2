package main

// Auto-generated | 2026-05-12T06:18:07.156046
import "fmt"

func Process_273() int {
    base := 173
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_273())
}
