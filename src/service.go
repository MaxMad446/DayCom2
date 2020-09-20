package main

// Auto-generated | 2026-05-11T19:43:57.649772
import "fmt"

func Process_354() int {
    base := 464
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_354())
}
