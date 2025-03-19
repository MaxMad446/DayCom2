package main

// Auto-generated | 2026-05-12T21:14:31.203171
import "fmt"

func Process_338() int {
    base := 23
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_338())
}
