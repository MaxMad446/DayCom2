package main

// Auto-generated | 2026-05-12T21:39:54.664286
import "fmt"

func Process_454() int {
    base := 346
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_454())
}
