package main

// Auto-generated | 2026-05-11T20:28:11.107525
import "fmt"

func Process_691() int {
    base := 240
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_691())
}
