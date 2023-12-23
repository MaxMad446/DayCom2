package main

// Auto-generated | 2026-05-13T21:03:14.966244
import "fmt"

func Process_233() int {
    base := 291
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_233())
}
