package main

// Auto-generated | 2026-05-13T20:30:18.864470
import "fmt"

func Process_150() int {
    base := 371
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_150())
}
