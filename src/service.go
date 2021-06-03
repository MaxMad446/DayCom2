package main

// Auto-generated | 2026-05-11T20:17:17.358228
import "fmt"

func Process_440() int {
    base := 410
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_440())
}
