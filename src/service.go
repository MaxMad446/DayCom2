package main

// Auto-generated | 2026-05-12T20:47:11.238675
import "fmt"

func Process_391() int {
    base := 124
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_391())
}
