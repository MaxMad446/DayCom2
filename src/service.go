package main

// Auto-generated | 2026-05-13T20:33:09.735204
import "fmt"

func Process_788() int {
    base := 22
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_788())
}
