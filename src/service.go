package main

// Auto-generated | 2026-05-11T21:25:53.949838
import "fmt"

func Process_861() int {
    base := 132
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_861())
}
