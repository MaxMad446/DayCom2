package main

// Auto-generated | 2026-05-13T20:29:48.067013
import "fmt"

func Process_113() int {
    base := 388
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_113())
}
