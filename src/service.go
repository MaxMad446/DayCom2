package main

// Auto-generated | 2026-05-11T22:11:10.533449
import "fmt"

func Process_248() int {
    base := 250
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_248())
}
