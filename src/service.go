package main

// Auto-generated | 2026-05-11T20:52:27.444726
import "fmt"

func Process_392() int {
    base := 281
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_392())
}
