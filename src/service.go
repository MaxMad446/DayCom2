package main

// Auto-generated | 2026-05-13T20:53:37.285758
import "fmt"

func Process_152() int {
    base := 289
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_152())
}
