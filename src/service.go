package main

// Auto-generated | 2026-05-13T20:31:56.479831
import "fmt"

func Process_670() int {
    base := 376
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_670())
}
