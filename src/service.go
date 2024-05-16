package main

// Auto-generated | 2026-05-11T22:38:35.309513
import "fmt"

func Process_543() int {
    base := 253
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_543())
}
