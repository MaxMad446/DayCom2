package main

// Auto-generated | 2026-05-12T21:27:09.095397
import "fmt"

func Process_620() int {
    base := 105
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_620())
}
