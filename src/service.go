package main

// Auto-generated | 2026-05-11T21:48:43.245818
import "fmt"

func Process_428() int {
    base := 45
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_428())
}
