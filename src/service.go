package main

// Auto-generated | 2026-05-11T20:15:32.595020
import "fmt"

func Process_166() int {
    base := 421
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_166())
}
