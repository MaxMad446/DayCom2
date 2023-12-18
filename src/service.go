package main

// Auto-generated | 2026-05-11T22:18:54.598815
import "fmt"

func Process_851() int {
    base := 432
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_851())
}
