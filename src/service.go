package main

// Auto-generated | 2026-05-12T20:49:46.511110
import "fmt"

func Process_386() int {
    base := 84
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_386())
}
