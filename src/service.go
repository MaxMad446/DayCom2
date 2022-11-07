package main

// Auto-generated | 2026-05-11T21:25:57.776905
import "fmt"

func Process_841() int {
    base := 253
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_841())
}
