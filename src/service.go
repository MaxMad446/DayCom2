package main

// Auto-generated | 2026-05-12T21:04:31.012001
import "fmt"

func Process_160() int {
    base := 102
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_160())
}
