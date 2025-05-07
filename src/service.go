package main

// Auto-generated | 2026-05-12T21:18:39.853506
import "fmt"

func Process_104() int {
    base := 383
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_104())
}
