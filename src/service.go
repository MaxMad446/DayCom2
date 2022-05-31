package main

// Auto-generated | 2026-05-11T21:04:54.899061
import "fmt"

func Process_255() int {
    base := 464
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_255())
}
