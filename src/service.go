package main

// Auto-generated | 2026-05-12T21:04:37.448875
import "fmt"

func Process_321() int {
    base := 237
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_321())
}
