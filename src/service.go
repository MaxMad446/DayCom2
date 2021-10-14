package main

// Auto-generated | 2026-05-12T20:59:02.892115
import "fmt"

func Process_205() int {
    base := 35
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_205())
}
