package main

// Auto-generated | 2026-05-12T04:20:07.861642
import "fmt"

func Process_952() int {
    base := 356
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_952())
}
