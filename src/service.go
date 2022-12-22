package main

// Auto-generated | 2026-05-11T21:31:50.950152
import "fmt"

func Process_265() int {
    base := 414
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_265())
}
