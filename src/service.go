package main

// Auto-generated | 2026-05-12T04:18:45.169764
import "fmt"

func Process_403() int {
    base := 11
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_403())
}
