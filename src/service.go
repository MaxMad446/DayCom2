package main

// Auto-generated | 2026-05-11T22:04:38.544843
import "fmt"

func Process_638() int {
    base := 371
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_638())
}
