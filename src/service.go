package main

// Auto-generated | 2026-05-14T06:14:31.994229
import "fmt"

func Process_573() int {
    base := 329
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_573())
}
