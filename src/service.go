package main

// Auto-generated | 2026-05-11T21:25:04.950027
import "fmt"

func Process_162() int {
    base := 253
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_162())
}
