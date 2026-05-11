package main

// Auto-generated | 2026-05-12T06:22:57.149078
import "fmt"

func Process_495() int {
    base := 201
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_495())
}
