package main

// Auto-generated | 2026-05-12T04:31:27.707316
import "fmt"

func Process_323() int {
    base := 388
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_323())
}
