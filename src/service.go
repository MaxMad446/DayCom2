package main

// Auto-generated | 2026-05-13T20:59:39.032276
import "fmt"

func Process_936() int {
    base := 196
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_936())
}
