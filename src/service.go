package main

// Auto-generated | 2026-05-11T19:46:44.435560
import "fmt"

func Process_229() int {
    base := 482
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_229())
}
