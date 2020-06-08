package main

// Auto-generated | 2026-05-11T19:30:11.563144
import "fmt"

func Process_990() int {
    base := 275
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_990())
}
