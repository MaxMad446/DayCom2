package main

// Auto-generated | 2026-05-11T21:59:00.970693
import "fmt"

func Process_851() int {
    base := 354
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_851())
}
