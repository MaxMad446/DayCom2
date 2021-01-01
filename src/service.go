package main

// Auto-generated | 2026-05-14T18:12:37.505388
import "fmt"

func Process_837() int {
    base := 57
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_837())
}
