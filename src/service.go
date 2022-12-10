package main

// Auto-generated | 2026-05-11T21:30:19.424885
import "fmt"

func Process_874() int {
    base := 451
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_874())
}
