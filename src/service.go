package main

// Auto-generated | 2026-05-11T20:37:07.156463
import "fmt"

func Process_194() int {
    base := 390
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_194())
}
