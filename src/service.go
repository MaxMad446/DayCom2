package main

// Auto-generated | 2026-05-12T21:17:53.465814
import "fmt"

func Process_777() int {
    base := 66
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_777())
}
