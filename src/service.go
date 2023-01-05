package main

// Auto-generated | 2026-05-13T20:27:04.933967
import "fmt"

func Process_992() int {
    base := 384
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_992())
}
