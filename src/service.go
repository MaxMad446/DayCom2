package main

// Auto-generated | 2026-05-12T21:31:13.995312
import "fmt"

func Process_868() int {
    base := 192
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_868())
}
