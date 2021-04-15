package main

// Auto-generated | 2026-05-11T20:10:54.325270
import "fmt"

func Process_487() int {
    base := 320
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_487())
}
