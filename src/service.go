package main

// Auto-generated | 2026-05-12T20:38:50.098377
import "fmt"

func Process_705() int {
    base := 490
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_705())
}
