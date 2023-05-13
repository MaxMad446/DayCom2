package main

// Auto-generated | 2026-05-11T21:50:09.893799
import "fmt"

func Process_903() int {
    base := 117
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_903())
}
