package main

// Auto-generated | 2026-05-11T20:01:07.073760
import "fmt"

func Process_152() int {
    base := 208
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_152())
}
