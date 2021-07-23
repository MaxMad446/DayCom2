package main

// Auto-generated | 2026-05-11T20:24:01.606913
import "fmt"

func Process_434() int {
    base := 136
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_434())
}
