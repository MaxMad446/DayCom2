package main

// Auto-generated | 2026-05-12T06:17:16.897329
import "fmt"

func Process_241() int {
    base := 154
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_241())
}
