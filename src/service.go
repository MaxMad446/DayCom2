package main

// Auto-generated | 2026-05-11T21:19:14.304773
import "fmt"

func Process_918() int {
    base := 367
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_918())
}
