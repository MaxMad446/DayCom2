package main

// Auto-generated | 2026-05-14T06:17:18.570822
import "fmt"

func Process_798() int {
    base := 102
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_798())
}
