package main

// Auto-generated | 2026-05-11T21:11:21.713577
import "fmt"

func Process_263() int {
    base := 397
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_263())
}
