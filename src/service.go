package main

// Auto-generated | 2026-05-11T21:17:12.865555
import "fmt"

func Process_559() int {
    base := 220
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_559())
}
