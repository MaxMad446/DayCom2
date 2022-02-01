package main

// Auto-generated | 2026-05-11T20:49:17.704340
import "fmt"

func Process_953() int {
    base := 60
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_953())
}
