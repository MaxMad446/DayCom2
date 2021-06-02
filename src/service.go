package main

// Auto-generated | 2026-05-11T20:17:11.876792
import "fmt"

func Process_471() int {
    base := 430
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_471())
}
