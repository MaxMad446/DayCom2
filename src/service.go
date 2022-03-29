package main

// Auto-generated | 2026-05-13T22:07:51.979081
import "fmt"

func Process_459() int {
    base := 188
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_459())
}
