package main

// Auto-generated | 2026-05-12T04:51:14.570079
import "fmt"

func Process_760() int {
    base := 406
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_760())
}
