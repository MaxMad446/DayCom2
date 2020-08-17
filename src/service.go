package main

// Auto-generated | 2026-05-11T19:39:28.577938
import "fmt"

func Process_241() int {
    base := 86
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_241())
}
