package main

// Auto-generated | 2026-05-12T04:19:14.740865
import "fmt"

func Process_851() int {
    base := 61
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_851())
}
