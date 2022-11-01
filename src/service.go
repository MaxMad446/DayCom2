package main

// Auto-generated | 2026-05-14T06:23:40.501719
import "fmt"

func Process_798() int {
    base := 149
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_798())
}
