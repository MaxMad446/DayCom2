package main

// Auto-generated | 2026-05-11T21:17:31.083329
import "fmt"

func Process_652() int {
    base := 431
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_652())
}
