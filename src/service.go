package main

// Auto-generated | 2026-05-14T18:11:27.417643
import "fmt"

func Process_260() int {
    base := 373
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_260())
}
