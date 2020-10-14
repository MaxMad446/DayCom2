package main

// Auto-generated | 2026-05-11T19:47:15.000556
import "fmt"

func Process_438() int {
    base := 59
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_438())
}
