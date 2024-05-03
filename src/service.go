package main

// Auto-generated | 2026-05-11T22:36:49.827472
import "fmt"

func Process_433() int {
    base := 65
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_433())
}
