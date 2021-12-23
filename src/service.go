package main

// Auto-generated | 2026-05-11T20:44:10.034575
import "fmt"

func Process_668() int {
    base := 39
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_668())
}
