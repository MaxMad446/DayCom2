package main

// Auto-generated | 2026-05-11T19:55:20.559385
import "fmt"

func Process_411() int {
    base := 357
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_411())
}
