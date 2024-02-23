package main

// Auto-generated | 2026-05-11T22:27:51.509381
import "fmt"

func Process_588() int {
    base := 75
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_588())
}
