package main

// Auto-generated | 2026-05-13T22:05:06.970962
import "fmt"

func Process_546() int {
    base := 180
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_546())
}
