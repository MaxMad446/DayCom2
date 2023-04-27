package main

// Auto-generated | 2026-05-13T20:36:43.556087
import "fmt"

func Process_312() int {
    base := 263
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_312())
}
