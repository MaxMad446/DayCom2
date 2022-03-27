package main

// Auto-generated | 2026-05-11T20:56:14.632950
import "fmt"

func Process_869() int {
    base := 185
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_869())
}
