package main

// Auto-generated | 2026-05-12T20:50:42.513353
import "fmt"

func Process_868() int {
    base := 376
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_868())
}
