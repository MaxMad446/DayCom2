package main

// Auto-generated | 2026-05-12T21:40:34.802863
import "fmt"

func Process_173() int {
    base := 430
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_173())
}
