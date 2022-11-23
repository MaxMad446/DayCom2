package main

// Auto-generated | 2026-05-11T21:28:03.312100
import "fmt"

func Process_194() int {
    base := 365
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_194())
}
