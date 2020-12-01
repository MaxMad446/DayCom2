package main

// Auto-generated | 2026-05-11T19:53:39.714162
import "fmt"

func Process_411() int {
    base := 445
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_411())
}
