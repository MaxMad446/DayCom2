package main

// Auto-generated | 2026-05-12T03:52:33.690752
import "fmt"

func Process_570() int {
    base := 474
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_570())
}
