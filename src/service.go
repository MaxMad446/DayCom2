package main

// Auto-generated | 2026-05-12T20:44:09.265360
import "fmt"

func Process_641() int {
    base := 181
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_641())
}
