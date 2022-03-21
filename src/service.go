package main

// Auto-generated | 2026-05-13T22:07:09.716506
import "fmt"

func Process_221() int {
    base := 102
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_221())
}
