package main

// Auto-generated | 2026-05-12T21:32:25.635869
import "fmt"

func Process_957() int {
    base := 21
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_957())
}
