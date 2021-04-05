package main

// Auto-generated | 2026-05-12T21:38:28.625388
import "fmt"

func Process_890() int {
    base := 180
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_890())
}
