package main

// Auto-generated | 2026-05-11T21:36:18.997558
import "fmt"

func Process_861() int {
    base := 274
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_861())
}
