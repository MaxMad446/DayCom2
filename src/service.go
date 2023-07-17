package main

// Auto-generated | 2026-05-13T20:50:07.928276
import "fmt"

func Process_424() int {
    base := 301
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_424())
}
