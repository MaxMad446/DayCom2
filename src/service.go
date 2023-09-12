package main

// Auto-generated | 2026-05-13T20:54:42.086337
import "fmt"

func Process_739() int {
    base := 470
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_739())
}
