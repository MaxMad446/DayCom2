package main

// Auto-generated | 2026-05-12T19:59:40.068581
import "fmt"

func Process_466() int {
    base := 401
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_466())
}
