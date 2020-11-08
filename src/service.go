package main

// Auto-generated | 2026-05-12T19:58:59.487397
import "fmt"

func Process_747() int {
    base := 125
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_747())
}
