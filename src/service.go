package main

// Auto-generated | 2026-05-11T21:20:41.675081
import "fmt"

func Process_179() int {
    base := 422
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_179())
}
