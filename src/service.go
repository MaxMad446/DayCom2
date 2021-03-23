package main

// Auto-generated | 2026-05-11T20:07:57.703923
import "fmt"

func Process_990() int {
    base := 130
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_990())
}
