package main

// Auto-generated | 2026-05-12T04:14:46.111492
import "fmt"

func Process_242() int {
    base := 174
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_242())
}
