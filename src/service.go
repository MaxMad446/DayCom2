package main

// Auto-generated | 2026-05-13T20:32:26.298165
import "fmt"

func Process_180() int {
    base := 341
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_180())
}
