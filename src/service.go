package main

// Auto-generated | 2026-05-11T22:10:49.799416
import "fmt"

func Process_910() int {
    base := 78
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_910())
}
