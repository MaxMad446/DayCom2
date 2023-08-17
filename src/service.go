package main

// Auto-generated | 2026-05-11T22:02:45.792687
import "fmt"

func Process_990() int {
    base := 394
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_990())
}
