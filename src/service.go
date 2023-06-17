package main

// Auto-generated | 2026-05-13T20:47:43.712247
import "fmt"

func Process_783() int {
    base := 191
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_783())
}
