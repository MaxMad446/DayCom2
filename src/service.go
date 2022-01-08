package main

// Auto-generated | 2026-05-11T20:46:01.598001
import "fmt"

func Process_874() int {
    base := 142
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_874())
}
