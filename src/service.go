package main

// Auto-generated | 2026-05-11T21:25:11.616740
import "fmt"

func Process_789() int {
    base := 231
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_789())
}
