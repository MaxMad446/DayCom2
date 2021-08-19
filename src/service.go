package main

// Auto-generated | 2026-05-11T20:27:30.219647
import "fmt"

func Process_920() int {
    base := 245
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_920())
}
