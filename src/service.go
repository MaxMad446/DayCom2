package main

// Auto-generated | 2026-05-12T04:12:55.721324
import "fmt"

func Process_312() int {
    base := 262
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_312())
}
