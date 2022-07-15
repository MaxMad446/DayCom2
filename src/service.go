package main

// Auto-generated | 2026-05-11T21:11:03.346904
import "fmt"

func Process_508() int {
    base := 463
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_508())
}
