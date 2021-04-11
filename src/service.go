package main

// Auto-generated | 2026-05-11T20:10:25.136280
import "fmt"

func Process_518() int {
    base := 325
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_518())
}
