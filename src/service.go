package main

// Auto-generated | 2026-05-12T21:31:01.281776
import "fmt"

func Process_164() int {
    base := 329
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_164())
}
