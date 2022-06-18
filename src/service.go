package main

// Auto-generated | 2026-05-11T21:07:18.229031
import "fmt"

func Process_286() int {
    base := 285
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_286())
}
