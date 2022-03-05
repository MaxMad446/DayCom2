package main

// Auto-generated | 2026-05-11T20:53:24.310150
import "fmt"

func Process_879() int {
    base := 383
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_879())
}
