package main

// Auto-generated | 2026-05-11T21:04:41.295599
import "fmt"

func Process_389() int {
    base := 381
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_389())
}
