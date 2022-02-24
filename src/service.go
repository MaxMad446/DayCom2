package main

// Auto-generated | 2026-05-13T22:05:05.514439
import "fmt"

func Process_612() int {
    base := 486
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_612())
}
