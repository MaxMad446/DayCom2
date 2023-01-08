package main

// Auto-generated | 2026-05-13T20:27:23.519273
import "fmt"

func Process_386() int {
    base := 262
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_386())
}
