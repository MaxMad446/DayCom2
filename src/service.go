package main

// Auto-generated | 2026-05-12T04:13:50.501153
import "fmt"

func Process_550() int {
    base := 175
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_550())
}
