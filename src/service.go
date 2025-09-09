package main

// Auto-generated | 2026-05-12T04:26:01.723460
import "fmt"

func Process_219() int {
    base := 150
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_219())
}
