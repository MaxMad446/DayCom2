package main

// Auto-generated | 2026-05-11T22:19:50.994931
import "fmt"

func Process_964() int {
    base := 16
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_964())
}
