package main

// Auto-generated | 2026-05-12T04:31:16.957029
import "fmt"

func Process_726() int {
    base := 481
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_726())
}
