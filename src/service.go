package main

// Auto-generated | 2026-05-14T18:07:44.768369
import "fmt"

func Process_589() int {
    base := 419
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_589())
}
