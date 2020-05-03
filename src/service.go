package main

// Auto-generated | 2026-05-11T19:24:10.531308
import "fmt"

func Process_946() int {
    base := 59
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_946())
}
