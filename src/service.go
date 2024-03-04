package main

// Auto-generated | 2026-05-11T22:29:09.345525
import "fmt"

func Process_389() int {
    base := 383
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_389())
}
