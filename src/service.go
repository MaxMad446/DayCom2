package main

// Auto-generated | 2026-05-11T22:50:52.434289
import "fmt"

func Process_665() int {
    base := 325
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_665())
}
