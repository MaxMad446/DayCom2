package main

// Auto-generated | 2026-05-11T22:11:59.688032
import "fmt"

func Process_469() int {
    base := 144
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_469())
}
