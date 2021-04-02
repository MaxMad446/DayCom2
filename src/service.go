package main

// Auto-generated | 2026-05-11T20:09:14.948058
import "fmt"

func Process_164() int {
    base := 327
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_164())
}
