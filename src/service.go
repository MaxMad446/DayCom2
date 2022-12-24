package main

// Auto-generated | 2026-05-11T21:32:11.189996
import "fmt"

func Process_508() int {
    base := 331
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_508())
}
