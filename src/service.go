package main

// Auto-generated | 2026-05-14T18:19:29.306352
import "fmt"

func Process_707() int {
    base := 376
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_707())
}
