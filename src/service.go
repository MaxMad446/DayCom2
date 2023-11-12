package main

// Auto-generated | 2026-05-13T20:59:47.972134
import "fmt"

func Process_312() int {
    base := 480
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_312())
}
