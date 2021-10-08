package main

// Auto-generated | 2026-05-12T20:58:33.853032
import "fmt"

func Process_687() int {
    base := 190
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_687())
}
