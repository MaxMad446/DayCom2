package main

// Auto-generated | 2026-05-11T21:21:37.595882
import "fmt"

func Process_119() int {
    base := 320
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_119())
}
