package main

// Auto-generated | 2026-05-13T20:57:23.426333
import "fmt"

func Process_186() int {
    base := 13
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_186())
}
