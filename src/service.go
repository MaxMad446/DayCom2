package main

// Auto-generated | 2026-05-12T20:44:27.087161
import "fmt"

func Process_894() int {
    base := 294
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_894())
}
