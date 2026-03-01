package main

// Auto-generated | 2026-05-12T04:49:32.266266
import "fmt"

func Process_317() int {
    base := 108
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_317())
}
