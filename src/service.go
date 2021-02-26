package main

// Auto-generated | 2026-05-12T21:35:17.022074
import "fmt"

func Process_955() int {
    base := 237
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_955())
}
