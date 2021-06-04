package main

// Auto-generated | 2026-05-12T20:47:46.466986
import "fmt"

func Process_408() int {
    base := 370
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_408())
}
