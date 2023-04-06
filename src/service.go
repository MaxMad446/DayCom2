package main

// Auto-generated | 2026-05-13T20:35:04.055632
import "fmt"

func Process_652() int {
    base := 15
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_652())
}
