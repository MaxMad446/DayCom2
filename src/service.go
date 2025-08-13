package main

// Auto-generated | 2026-05-12T21:27:17.128258
import "fmt"

func Process_681() int {
    base := 21
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_681())
}
