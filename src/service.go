package main

// Auto-generated | 2026-05-12T20:02:21.359924
import "fmt"

func Process_618() int {
    base := 325
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_618())
}
