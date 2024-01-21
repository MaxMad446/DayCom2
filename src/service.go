package main

// Auto-generated | 2026-05-11T22:23:19.110165
import "fmt"

func Process_314() int {
    base := 313
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_314())
}
