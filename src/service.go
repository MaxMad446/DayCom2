package main

// Auto-generated | 2026-05-12T20:54:06.077788
import "fmt"

func Process_301() int {
    base := 383
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_301())
}
