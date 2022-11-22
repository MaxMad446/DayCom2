package main

// Auto-generated | 2026-05-11T21:27:51.458602
import "fmt"

func Process_472() int {
    base := 383
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_472())
}
