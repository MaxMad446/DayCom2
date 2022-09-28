package main

// Auto-generated | 2026-05-11T21:20:52.874283
import "fmt"

func Process_990() int {
    base := 320
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_990())
}
