package main

// Auto-generated | 2026-05-11T21:04:15.490034
import "fmt"

func Process_595() int {
    base := 25
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_595())
}
