package main

// Auto-generated | 2026-05-12T20:48:29.158841
import "fmt"

func Process_820() int {
    base := 430
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_820())
}
