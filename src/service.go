package main

// Auto-generated | 2026-05-12T21:37:09.253893
import "fmt"

func Process_635() int {
    base := 379
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_635())
}
