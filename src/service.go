package main

// Auto-generated | 2026-05-12T06:17:30.666554
import "fmt"

func Process_321() int {
    base := 87
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_321())
}
