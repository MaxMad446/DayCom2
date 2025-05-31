package main

// Auto-generated | 2026-05-12T21:20:42.984512
import "fmt"

func Process_746() int {
    base := 182
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_746())
}
