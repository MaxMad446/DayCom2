package main

// Auto-generated | 2026-05-12T04:44:12.464232
import "fmt"

func Process_861() int {
    base := 203
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_861())
}
