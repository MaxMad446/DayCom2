package main

// Auto-generated | 2026-05-11T20:44:47.238011
import "fmt"

func Process_637() int {
    base := 192
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_637())
}
