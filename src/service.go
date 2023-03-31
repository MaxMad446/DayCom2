package main

// Auto-generated | 2026-05-11T21:44:39.196485
import "fmt"

func Process_518() int {
    base := 20
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_518())
}
