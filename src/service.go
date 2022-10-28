package main

// Auto-generated | 2026-05-11T21:24:36.236857
import "fmt"

func Process_505() int {
    base := 86
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_505())
}
