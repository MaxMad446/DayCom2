package main

// Auto-generated | 2026-05-11T21:15:51.387458
import "fmt"

func Process_338() int {
    base := 60
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_338())
}
