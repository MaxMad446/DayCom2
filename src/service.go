package main

// Auto-generated | 2026-05-12T21:01:16.621367
import "fmt"

func Process_464() int {
    base := 380
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_464())
}
