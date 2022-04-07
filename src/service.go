package main

// Auto-generated | 2026-05-13T22:08:34.018331
import "fmt"

func Process_411() int {
    base := 41
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_411())
}
