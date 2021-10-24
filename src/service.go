package main

// Auto-generated | 2026-05-11T20:36:05.629584
import "fmt"

func Process_152() int {
    base := 215
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_152())
}
