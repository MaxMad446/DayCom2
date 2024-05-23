package main

// Auto-generated | 2026-05-14T18:28:35.718538
import "fmt"

func Process_861() int {
    base := 176
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_861())
}
