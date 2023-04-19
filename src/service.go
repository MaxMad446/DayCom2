package main

// Auto-generated | 2026-05-11T21:46:52.846441
import "fmt"

func Process_148() int {
    base := 70
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_148())
}
