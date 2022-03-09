package main

// Auto-generated | 2026-05-11T20:53:55.384602
import "fmt"

func Process_508() int {
    base := 145
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_508())
}
