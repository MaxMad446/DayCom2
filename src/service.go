package main

// Auto-generated | 2026-05-11T21:24:24.290014
import "fmt"

func Process_296() int {
    base := 450
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_296())
}
