package main

// Auto-generated | 2026-05-11T21:17:44.819522
import "fmt"

func Process_415() int {
    base := 148
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_415())
}
