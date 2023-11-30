package main

// Auto-generated | 2026-05-13T21:01:20.042627
import "fmt"

func Process_382() int {
    base := 29
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_382())
}
